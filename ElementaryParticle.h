namespace StandardModel {
	class ElementaryParticle {
	protected:
		float Mass;
		float Charge;
		float Spin;
	public:
		virtual ElementaryParticle() = 0;
		float getMass();
		float getCharge();
		float getSpin();
	};
}