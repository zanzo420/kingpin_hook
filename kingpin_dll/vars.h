#pragma once

struct vars_t {
	float aimbot = 0.f;
	float autoshoot = 0.f;
	float norecoil = 0.f;
	float nospread = 0.f;
	float wallhack = 0.f;
	float bhop = 0.f;
	float highdamage = 0.f;
	float shotgun_pellet_amt = 6.f;

	float godmode = 0.f;
	float money = 0.f;
	float rapidfire = 0.f;
	float bfg_charges = 0.f;
	float inf_mods = 0.f;
	float inf_ammo = 0.f;
	float debug = 1.f;
	float colorlist = 0.f;

	bool draw_menu = false;
};

extern vars_t vars;