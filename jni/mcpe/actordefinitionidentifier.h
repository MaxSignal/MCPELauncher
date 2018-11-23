#pragma once
class ActorDefinitionIdentifier {
public:

	// FIXME 0.16: yes this will leak memory sigh
	char filler[12]; // 0 from ActorDefinitionIdentifier constructor

	ActorDefinitionIdentifier();
	ActorDefinitionIdentifier(ActorType);
	ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
	ActorDefinitionIdentifier(std::string const&);

	operator==(ActorDefinitionIdentifier const&) const;
	operator=(ActorDefinitionIdentifier const&);

	ActorType _getLegacyActorType() const;
	std::string getCanonicalName() const;
};
static_assert(sizeof(ActorDefinitionIdentifier) == 12, "ActorDefinitionIdentifier size");
