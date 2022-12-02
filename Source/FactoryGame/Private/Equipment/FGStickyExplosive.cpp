// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGStickyExplosive.h"
#include "GameFramework/RotatingMovementComponent.h"

AFGStickyExplosive::AFGStickyExplosive() : Super() {
	this->mDetonateIn = 0.0;
	this->mEnvironmentDestructionSphere = nullptr;
	this->mRotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
	this->mThrowRotation = FRotator(-150.29449462890625, -89.38703918457031, -97.71720886230469);
}
void AFGStickyExplosive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGStickyExplosive, mDetonateIn);
}
void AFGStickyExplosive::OnImpact_Native(const FHitResult& hitResult){ }
float AFGStickyExplosive::TakeDamage(float DamageAmount, const  FDamageEvent& DamageEvent,
							 AController* EventInstigator,
							AActor* DamageCauser){ return float(); }
bool AFGStickyExplosive::ShouldSave_Implementation() const{ return bool(); }
bool AFGStickyExplosive::NeedTransform_Implementation(){ return bool(); }
void AFGStickyExplosive::TriggerSecondary(){ }
void AFGStickyExplosive::TriggerSecondaryWithDelay(float delayTime){ }
void AFGStickyExplosive::SetToDetonate(float timeUntilDetonate){ }
void AFGStickyExplosive::OnRep_DetonateIn(){ }
void AFGStickyExplosive::OnExplode_Implementation(){ }
