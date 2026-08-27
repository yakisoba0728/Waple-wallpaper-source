// Function: FUN_140021e50
// Addr: 140021e50
// Size: 50518 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140021e50(HWND param_1,UINT param_2,ulonglong param_3,int *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  BOOL BVar7;
  LSTATUS LVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  LPCWSTR pWVar13;
  LPCWSTR pWVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  HANDLE hFile;
  undefined4 *puVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  HWND hWnd;
  longlong lVar21;
  longlong lVar22;
  __uint64 _Var23;
  longlong lVar24;
  undefined8 *puVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  LPCWSTR lpFile;
  undefined8 uVar31;
  undefined8 uVar32;
  UINT UVar33;
  ushort uVar34;
  uint uVar35;
  WPARAM wParam;
  LPARAM lParam;
  uint uVar36;
  undefined4 uVar37;
  bool bVar38;
  bool bVar39;
  undefined4 local_res10 [6];
  undefined4 local_7348;
  undefined4 uStack_7344;
  undefined4 uStack_7340;
  undefined4 uStack_733c;
  undefined1 local_7338;
  char local_7337;
  undefined1 local_7336;
  byte local_7335;
  undefined1 local_7334;
  undefined1 local_7333;
  undefined1 local_7332;
  undefined1 local_7331;
  undefined1 local_7330;
  undefined1 local_732f;
  undefined1 local_732e;
  undefined1 local_732d;
  undefined1 local_732c;
  undefined1 local_732b;
  undefined1 local_732a;
  undefined1 local_7329;
  undefined1 local_7328 [8];
  longlong local_7320;
  undefined1 local_7318;
  undefined1 local_7317 [3];
  int local_7314;
  int local_7310;
  int local_730c;
  int local_7308;
  uint local_7304;
  undefined1 local_7300 [8];
  undefined1 local_72f8 [8];
  undefined1 local_72f0 [8];
  undefined1 local_72e8 [8];
  undefined1 local_72e0 [8];
  undefined1 local_72d8 [8];
  undefined1 local_72d0 [8];
  undefined1 local_72c8 [8];
  undefined1 local_72c0 [8];
  undefined1 local_72b8 [8];
  BYTE local_72b0 [4];
  DWORD local_72ac;
  DWORD local_72a8;
  DWORD local_72a4;
  undefined1 local_72a0 [8];
  undefined1 local_7298 [8];
  undefined1 local_7290 [8];
  int local_7288 [2];
  undefined1 local_7280 [24];
  HKEY local_7268;
  undefined1 local_7260 [8];
  undefined1 local_7258 [8];
  undefined1 local_7250 [8];
  undefined1 local_7248 [8];
  undefined1 local_7240 [8];
  undefined1 local_7238 [8];
  undefined1 local_7230 [8];
  longlong local_7228;
  undefined1 local_7220 [8];
  undefined1 local_7218 [8];
  undefined1 local_7210 [8];
  longlong local_7208;
  longlong lStack_7200;
  undefined8 local_71f8;
  undefined8 local_71f0;
  undefined8 uStack_71e8;
  undefined1 local_71e0 [40];
  undefined8 *local_71b8;
  undefined8 *puStack_71b0;
  undefined8 local_71a8;
  undefined1 local_71a0 [40];
  undefined1 local_7178 [40];
  undefined1 local_7150 [40];
  undefined1 local_7128 [16];
  undefined1 local_7118 [16];
  undefined1 local_7108 [16];
  ulonglong local_70f8;
  undefined8 uStack_70f0;
  undefined1 local_70e8 [16];
  undefined1 local_70d8 [16];
  undefined1 local_70c8 [16];
  undefined1 local_70b8 [16];
  undefined1 local_70a8 [16];
  undefined1 local_7098 [16];
  undefined1 local_7088 [40];
  undefined1 local_7060 [40];
  undefined1 local_7038 [40];
  undefined1 local_7010 [40];
  undefined1 local_6fe8 [40];
  undefined1 local_6fc0 [40];
  undefined1 local_6f98 [40];
  undefined1 local_6f70 [40];
  undefined8 local_6f48;
  longlong local_6f40;
  undefined1 local_6f38 [40];
  undefined1 local_6f10 [40];
  tagRECT local_6ee8;
  undefined1 *local_6ed8;
  undefined1 *local_6ed0;
  undefined1 local_6ec8 [24];
  undefined1 local_6eb0 [32];
  undefined1 local_6e90 [40];
  undefined8 local_6e68 [2];
  longlong local_6e58 [3];
  undefined1 local_6e40 [32];
  undefined1 local_6e20 [32];
  undefined1 local_6e00 [32];
  undefined1 local_6de0 [40];
  undefined1 local_6db8 [40];
  undefined1 local_6d90 [40];
  undefined1 local_6d68 [40];
  undefined1 local_6d40 [40];
  undefined1 local_6d18 [40];
  undefined1 local_6cf0 [40];
  undefined1 local_6cc8 [40];
  undefined1 local_6ca0 [40];
  undefined1 local_6c78 [40];
  undefined1 local_6c50 [16];
  undefined1 local_6c40 [16];
  undefined1 local_6c30 [32];
  undefined1 local_6c10 [16];
  undefined1 local_6c00 [16];
  undefined1 local_6bf0 [16];
  undefined1 *local_6be0;
  undefined1 *local_6bd8;
  undefined8 local_6bd0;
  undefined8 local_6bc8;
  undefined1 local_6bc0 [16];
  undefined1 local_6bb0 [16];
  undefined1 local_6ba0 [16];
  undefined1 local_6b90 [16];
  undefined1 local_6b80 [16];
  undefined1 local_6b70 [32];
  undefined1 local_6b50 [32];
  undefined1 local_6b30 [32];
  undefined1 local_6b10 [32];
  undefined1 local_6af0 [32];
  undefined1 local_6ad0 [40];
  undefined1 local_6aa8 [40];
  undefined8 local_6a80 [2];
  longlong local_6a70 [3];
  undefined1 local_6a58 [40];
  undefined1 local_6a30 [40];
  undefined1 local_6a08 [40];
  undefined1 local_69e0 [40];
  undefined1 local_69b8 [40];
  undefined1 local_6990 [40];
  undefined1 local_6968 [40];
  undefined1 local_6940 [40];
  undefined1 local_6918 [40];
  undefined1 local_68f0 [40];
  undefined1 local_68c8 [40];
  undefined1 local_68a0 [40];
  undefined1 local_6878 [40];
  undefined1 local_6850 [40];
  undefined1 local_6828 [40];
  undefined1 local_6800 [40];
  undefined1 local_67d8 [40];
  undefined1 local_67b0 [40];
  undefined1 local_6788 [40];
  undefined1 local_6760 [40];
  undefined1 local_6738 [40];
  undefined1 local_6710 [40];
  undefined1 local_66e8 [24];
  char local_66d0 [8];
  undefined1 local_66c8 [32];
  undefined4 local_66a8;
  undefined1 local_66a0 [24];
  undefined1 local_6688 [24];
  undefined1 local_6670 [24];
  undefined1 local_6658 [24];
  undefined1 local_6640 [32];
  undefined1 local_6620 [32];
  undefined1 local_6600 [32];
  undefined1 local_65e0 [32];
  undefined1 local_65c0 [32];
  undefined1 local_65a0 [32];
  undefined1 local_6580 [32];
  undefined1 local_6560 [32];
  undefined1 local_6540 [32];
  undefined1 local_6520 [32];
  undefined1 local_6500 [32];
  undefined1 local_64e0 [32];
  undefined1 local_64c0 [32];
  undefined1 local_64a0 [32];
  undefined1 local_6480 [32];
  undefined1 local_6460 [32];
  undefined1 local_6440 [32];
  undefined1 local_6420 [32];
  undefined1 local_6400 [32];
  undefined1 local_63e0 [32];
  undefined1 local_63c0 [32];
  undefined1 local_63a0 [32];
  undefined1 local_6380 [32];
  undefined1 local_6360 [32];
  undefined1 local_6340 [32];
  undefined1 local_6320 [32];
  undefined1 local_6300 [32];
  undefined1 local_62e0 [32];
  undefined1 local_62c0 [32];
  undefined1 local_62a0 [32];
  undefined1 local_6280 [32];
  undefined1 local_6260 [32];
  undefined1 local_6240 [32];
  undefined1 local_6220 [32];
  undefined1 local_6200 [32];
  undefined1 local_61e0 [32];
  undefined1 local_61c0 [32];
  undefined1 local_61a0 [32];
  undefined1 local_6180 [32];
  undefined1 local_6160 [32];
  undefined1 local_6140 [32];
  undefined1 local_6120 [40];
  undefined1 local_60f8 [40];
  undefined1 local_60d0 [40];
  undefined1 local_60a8 [40];
  undefined1 local_6080 [40];
  undefined1 local_6058 [40];
  undefined1 local_6030 [40];
  undefined1 local_6008 [40];
  undefined1 local_5fe0 [40];
  undefined1 local_5fb8 [40];
  undefined1 local_5f90 [40];
  undefined1 local_5f68 [40];
  undefined1 local_5f40 [40];
  undefined1 local_5f18 [40];
  undefined1 local_5ef0 [40];
  undefined1 local_5ec8 [40];
  undefined1 local_5ea0 [40];
  undefined1 local_5e78 [40];
  undefined1 local_5e50 [40];
  undefined1 local_5e28 [40];
  undefined1 local_5e00 [40];
  undefined1 local_5dd8 [40];
  undefined1 local_5db0 [40];
  undefined1 local_5d88 [40];
  undefined1 local_5d60 [8];
  undefined1 local_5d58 [8];
  undefined1 local_5d50 [8];
  undefined1 local_5d48 [8];
  undefined1 local_5d40 [8];
  undefined1 local_5d38 [8];
  undefined1 local_5d30 [8];
  undefined1 local_5d28 [8];
  undefined1 local_5d20 [8];
  undefined1 local_5d18 [8];
  undefined1 local_5d10 [40];
  undefined1 local_5ce8 [32];
  undefined1 local_5cc8 [32];
  undefined1 local_5ca8 [32];
  undefined1 local_5c88 [32];
  undefined1 local_5c68 [32];
  undefined1 local_5c48 [32];
  undefined1 local_5c28 [32];
  undefined1 local_5c08 [32];
  undefined1 local_5be8 [32];
  undefined1 local_5bc8 [40];
  undefined1 local_5ba0 [40];
  undefined1 local_5b78 [40];
  undefined1 local_5b50 [40];
  undefined1 local_5b28 [40];
  undefined1 local_5b00 [32];
  undefined1 local_5ae0 [16];
  undefined8 local_5ad0;
  undefined1 local_5ac0 [40];
  undefined8 local_5a98;
  undefined8 uStack_5a90;
  undefined8 local_5a88;
  undefined8 uStack_5a80;
  undefined1 local_5a78 [32];
  undefined1 local_5a58 [32];
  undefined1 local_5a38 [32];
  undefined1 local_5a18 [32];
  undefined1 local_59f8 [32];
  undefined1 local_59d8 [32];
  undefined1 local_59b8 [32];
  undefined1 local_5998 [32];
  undefined1 local_5978 [32];
  undefined1 local_5958 [32];
  undefined1 local_5938 [32];
  undefined1 local_5918 [32];
  undefined1 local_58f8 [32];
  undefined1 local_58d8 [8];
  undefined1 local_58d0 [8];
  undefined1 local_58c8 [8];
  undefined1 local_58c0 [40];
  undefined1 local_5898 [40];
  undefined1 local_5870 [40];
  undefined1 local_5848 [40];
  undefined1 local_5820 [40];
  undefined1 local_57f8 [40];
  undefined1 local_57d0 [40];
  undefined1 local_57a8 [40];
  undefined1 local_5780 [40];
  undefined1 local_5758 [40];
  undefined1 local_5730 [40];
  undefined1 local_5708 [40];
  undefined1 local_56e0 [40];
  undefined1 local_56b8 [40];
  undefined1 local_5690 [40];
  undefined1 local_5668 [40];
  undefined1 local_5640 [40];
  undefined1 local_5618 [32];
  undefined1 local_55f8 [40];
  undefined1 local_55d0 [40];
  undefined1 local_55a8 [40];
  undefined1 local_5580 [40];
  undefined1 local_5558 [40];
  undefined1 local_5530 [40];
  undefined1 local_5508 [40];
  undefined1 local_54e0 [40];
  undefined1 local_54b8 [40];
  undefined1 local_5490 [40];
  undefined1 local_5468 [40];
  undefined1 local_5440 [40];
  undefined1 local_5418 [40];
  undefined1 local_53f0 [40];
  undefined1 local_53c8 [40];
  undefined1 local_53a0 [40];
  undefined1 local_5378 [40];
  undefined1 local_5350 [40];
  undefined1 local_5328 [40];
  undefined1 local_5300 [40];
  undefined1 local_52d8 [40];
  undefined1 local_52b0 [40];
  undefined1 local_5288 [40];
  undefined1 local_5260 [40];
  undefined1 local_5238 [40];
  undefined1 local_5210 [40];
  undefined1 local_51e8 [40];
  undefined1 local_51c0 [40];
  undefined1 local_5198 [40];
  undefined1 local_5170 [40];
  undefined1 local_5148 [40];
  undefined1 local_5120 [40];
  undefined1 local_50f8 [40];
  undefined1 local_50d0 [40];
  undefined1 local_50a8 [40];
  undefined1 local_5080 [40];
  undefined1 local_5058 [40];
  undefined1 local_5030 [40];
  undefined1 local_5008 [40];
  undefined1 local_4fe0 [40];
  undefined1 local_4fb8 [40];
  undefined1 local_4f90 [40];
  undefined1 local_4f68 [40];
  undefined1 local_4f40 [32];
  undefined1 local_4f20 [32];
  undefined1 local_4f00 [32];
  undefined1 local_4ee0 [32];
  undefined1 local_4ec0 [32];
  undefined1 local_4ea0 [32];
  undefined1 local_4e80 [32];
  undefined1 local_4e60 [32];
  undefined1 local_4e40 [32];
  undefined1 local_4e20 [32];
  undefined1 local_4e00 [32];
  undefined1 local_4de0 [32];
  undefined1 local_4dc0 [32];
  undefined1 local_4da0 [32];
  undefined1 local_4d80 [32];
  undefined1 local_4d60 [32];
  undefined1 local_4d40 [32];
  undefined1 local_4d20 [32];
  undefined1 local_4d00 [32];
  undefined1 local_4ce0 [32];
  undefined1 local_4cc0 [32];
  undefined1 local_4ca0 [32];
  undefined1 local_4c80 [32];
  undefined1 local_4c60 [32];
  undefined1 local_4c40 [32];
  undefined1 local_4c20 [32];
  undefined1 local_4c00 [32];
  undefined1 local_4be0 [32];
  undefined1 local_4bc0 [32];
  undefined1 local_4ba0 [32];
  undefined1 local_4b80 [32];
  undefined1 local_4b60 [32];
  undefined1 local_4b40 [32];
  undefined1 local_4b20 [32];
  undefined1 local_4b00 [32];
  undefined1 local_4ae0 [32];
  undefined1 local_4ac0 [32];
  undefined1 local_4aa0 [32];
  undefined1 local_4a80 [32];
  undefined1 local_4a60 [32];
  undefined1 local_4a40 [32];
  undefined1 local_4a20 [32];
  undefined1 local_4a00 [32];
  undefined1 local_49e0 [32];
  undefined1 local_49c0 [32];
  undefined1 local_49a0 [32];
  undefined1 local_4980 [32];
  undefined1 local_4960 [32];
  undefined1 local_4940 [32];
  undefined1 local_4920 [32];
  undefined1 local_4900 [32];
  undefined1 local_48e0 [40];
  undefined1 local_48b8 [64];
  undefined1 local_4878 [64];
  undefined1 local_4838 [64];
  undefined1 local_47f8 [64];
  undefined1 local_47b8 [64];
  undefined1 local_4778 [64];
  undefined1 local_4738 [64];
  undefined1 local_46f8 [64];
  undefined1 local_46b8 [40];
  undefined1 local_4690 [40];
  undefined1 local_4668 [40];
  undefined1 local_4640 [40];
  undefined1 local_4618 [40];
  undefined1 local_45f0 [40];
  undefined1 local_45c8 [40];
  undefined1 local_45a0 [40];
  undefined1 local_4578 [40];
  undefined1 local_4550 [40];
  undefined1 local_4528 [40];
  undefined1 local_4500 [40];
  undefined1 local_44d8 [40];
  undefined1 local_44b0 [40];
  undefined1 local_4488 [40];
  undefined1 local_4460 [40];
  undefined1 local_4438 [40];
  undefined1 local_4410 [40];
  undefined1 local_43e8 [40];
  undefined1 local_43c0 [40];
  undefined1 local_4398 [40];
  undefined1 local_4370 [40];
  undefined1 local_4348 [40];
  undefined1 local_4320 [40];
  undefined1 local_42f8 [40];
  undefined1 local_42d0 [40];
  undefined1 local_42a8 [40];
  undefined1 local_4280 [40];
  undefined1 local_4258 [40];
  undefined1 local_4230 [40];
  undefined1 local_4208 [40];
  undefined1 local_41e0 [40];
  undefined1 local_41b8 [40];
  undefined1 local_4190 [40];
  undefined1 local_4168 [40];
  undefined1 local_4140 [40];
  undefined1 local_4118 [40];
  undefined1 local_40f0 [40];
  undefined1 local_40c8 [40];
  undefined1 local_40a0 [40];
  undefined1 local_4078 [40];
  undefined1 local_4050 [40];
  undefined1 local_4028 [40];
  undefined1 local_4000 [40];
  undefined1 local_3fd8 [40];
  undefined1 local_3fb0 [40];
  undefined1 local_3f88 [40];
  undefined1 local_3f60 [40];
  undefined1 local_3f38 [40];
  undefined1 local_3f10 [32];
  undefined8 local_3ef0;
  undefined1 local_3ee8 [16];
  undefined1 local_3ed8 [16];
  undefined1 local_3ec8 [16];
  undefined1 local_3eb8 [16];
  undefined1 local_3ea8 [16];
  undefined1 local_3e98 [16];
  undefined1 local_3e88 [16];
  undefined1 local_3e78 [32];
  undefined1 local_3e58 [32];
  undefined1 local_3e38 [32];
  undefined1 local_3e18 [32];
  undefined1 local_3df8 [32];
  undefined1 local_3dd8 [32];
  undefined1 local_3db8 [32];
  undefined1 local_3d98 [32];
  undefined1 local_3d78 [32];
  undefined1 local_3d58 [32];
  undefined1 local_3d38 [32];
  undefined1 local_3d18 [32];
  undefined1 local_3cf8 [32];
  undefined1 local_3cd8 [32];
  undefined1 local_3cb8 [32];
  undefined1 local_3c98 [32];
  undefined1 local_3c78 [32];
  undefined1 local_3c58 [32];
  undefined1 local_3c38 [32];
  undefined1 local_3c18 [32];
  undefined1 local_3bf8 [32];
  undefined1 local_3bd8 [32];
  undefined1 local_3bb8 [32];
  undefined1 local_3b98 [32];
  undefined1 local_3b78 [32];
  undefined1 local_3b58 [32];
  undefined1 local_3b38 [32];
  undefined1 local_3b18 [32];
  undefined1 local_3af8 [32];
  undefined1 local_3ad8 [32];
  undefined1 local_3ab8 [32];
  undefined1 local_3a98 [32];
  undefined1 local_3a78 [32];
  undefined1 local_3a58 [32];
  undefined1 local_3a38 [32];
  undefined1 local_3a18 [32];
  undefined1 local_39f8 [32];
  undefined1 local_39d8 [32];
  undefined1 local_39b8 [32];
  undefined1 local_3998 [32];
  undefined1 local_3978 [32];
  undefined1 local_3958 [32];
  undefined1 local_3938 [32];
  undefined1 local_3918 [32];
  undefined1 local_38f8 [32];
  undefined1 local_38d8 [32];
  undefined1 local_38b8 [32];
  undefined1 local_3898 [32];
  undefined1 local_3878 [32];
  undefined1 local_3858 [32];
  undefined1 local_3838 [32];
  undefined1 local_3818 [32];
  undefined1 local_37f8 [32];
  undefined1 local_37d8 [32];
  undefined1 local_37b8 [32];
  undefined1 local_3798 [32];
  undefined1 local_3778 [32];
  undefined1 local_3758 [32];
  undefined1 local_3738 [16];
  undefined1 local_3728 [16];
  undefined1 local_3718 [16];
  undefined1 local_3708 [16];
  undefined1 local_36f8 [16];
  undefined1 local_36e8 [16];
  undefined1 local_36d8 [16];
  undefined1 local_36c8 [16];
  undefined1 local_36b8 [16];
  undefined1 local_36a8 [16];
  undefined1 local_3698 [16];
  undefined1 local_3688 [16];
  undefined1 local_3678 [16];
  undefined1 local_3668 [16];
  undefined1 local_3658 [16];
  undefined1 local_3648 [16];
  undefined1 local_3638 [16];
  undefined1 local_3628 [16];
  undefined1 local_3618 [16];
  undefined1 local_3608 [16];
  undefined1 local_35f8 [16];
  undefined1 local_35e8 [16];
  undefined1 local_35d8 [16];
  undefined1 local_35c8 [16];
  undefined1 local_35b8 [16];
  undefined1 local_35a8 [16];
  undefined1 local_3598 [16];
  undefined1 local_3588 [16];
  undefined1 local_3578 [16];
  undefined1 local_3568 [16];
  undefined1 local_3558 [16];
  undefined1 local_3548 [16];
  undefined1 local_3538 [16];
  undefined1 local_3528 [16];
  undefined1 local_3518 [16];
  undefined1 local_3508 [16];
  undefined1 local_34f8 [16];
  undefined1 local_34e8 [16];
  undefined1 local_34d8 [16];
  undefined1 local_34c8 [16];
  undefined1 local_34b8 [16];
  undefined1 local_34a8 [16];
  undefined1 local_3498 [16];
  undefined1 local_3488 [16];
  undefined1 local_3478 [16];
  undefined1 local_3468 [16];
  undefined1 local_3458 [16];
  undefined1 local_3448 [16];
  undefined1 local_3438 [16];
  undefined1 local_3428 [16];
  undefined1 local_3418 [16];
  undefined1 local_3408 [16];
  undefined1 local_33f8 [16];
  undefined1 local_33e8 [16];
  undefined1 local_33d8 [16];
  undefined1 local_33c8 [16];
  undefined1 local_33b8 [16];
  undefined1 local_33a8 [16];
  undefined1 local_3398 [16];
  undefined1 local_3388 [16];
  undefined1 local_3378 [16];
  undefined1 local_3368 [16];
  undefined1 local_3358 [16];
  undefined1 local_3348 [16];
  undefined1 local_3338 [16];
  undefined1 local_3328 [16];
  undefined1 local_3318 [16];
  undefined1 local_3308 [16];
  undefined1 local_32f8 [16];
  undefined1 local_32e8 [16];
  undefined1 local_32d8 [16];
  undefined1 local_32c8 [16];
  undefined1 local_32b8 [16];
  undefined1 local_32a8 [16];
  undefined1 local_3298 [16];
  undefined1 local_3288 [16];
  undefined1 local_3278 [16];
  undefined1 local_3268 [16];
  undefined1 local_3258 [16];
  undefined1 local_3248 [16];
  undefined1 local_3238 [16];
  undefined1 local_3228 [16];
  undefined1 local_3218 [16];
  undefined1 local_3208 [16];
  undefined1 local_31f8 [16];
  undefined1 local_31e8 [16];
  undefined1 local_31d8 [16];
  undefined1 local_31c8 [16];
  undefined1 local_31b8 [16];
  undefined1 local_31a8 [16];
  undefined1 local_3198 [16];
  undefined1 local_3188 [16];
  undefined1 local_3178 [16];
  undefined1 local_3168 [16];
  undefined1 local_3158 [16];
  undefined1 local_3148 [16];
  undefined1 local_3138 [16];
  undefined1 local_3128 [16];
  undefined1 local_3118 [16];
  undefined1 local_3108 [16];
  undefined1 local_30f8 [16];
  undefined1 local_30e8 [16];
  undefined1 local_30d8 [16];
  undefined1 local_30c8 [16];
  undefined1 local_30b8 [16];
  undefined1 local_30a8 [16];
  undefined1 local_3098 [16];
  undefined1 local_3088 [16];
  undefined1 local_3078 [16];
  undefined1 local_3068 [16];
  undefined1 local_3058 [16];
  undefined1 local_3048 [16];
  undefined1 local_3038 [16];
  undefined1 local_3028 [16];
  undefined1 local_3018 [16];
  undefined1 local_3008 [16];
  undefined1 local_2ff8 [16];
  undefined1 local_2fe8 [16];
  undefined1 local_2fd8 [16];
  undefined1 local_2fc8 [16];
  undefined1 local_2fb8 [16];
  undefined1 local_2fa8 [16];
  undefined1 local_2f98 [16];
  undefined1 local_2f88 [16];
  undefined1 local_2f78 [16];
  undefined1 local_2f68 [16];
  undefined1 local_2f58 [16];
  undefined1 local_2f48 [16];
  undefined1 local_2f38 [16];
  undefined1 local_2f28 [16];
  undefined1 local_2f18 [16];
  undefined1 local_2f08 [16];
  undefined1 local_2ef8 [16];
  undefined1 local_2ee8 [16];
  undefined1 local_2ed8 [16];
  undefined1 local_2ec8 [16];
  undefined1 local_2eb8 [16];
  undefined1 local_2ea8 [16];
  undefined1 local_2e98 [16];
  undefined1 local_2e88 [16];
  undefined1 local_2e78 [16];
  undefined1 local_2e68 [16];
  undefined1 local_2e58 [16];
  undefined1 local_2e48 [16];
  undefined1 local_2e38 [16];
  undefined1 local_2e28 [16];
  undefined1 local_2e18 [16];
  undefined1 local_2e08 [16];
  undefined1 local_2df8 [16];
  undefined1 local_2de8 [16];
  undefined1 local_2dd8 [16];
  undefined1 local_2dc8 [16];
  undefined1 local_2db8 [16];
  undefined1 local_2da8 [16];
  undefined1 local_2d98 [16];
  undefined1 local_2d88 [16];
  undefined1 local_2d78 [16];
  undefined1 local_2d68 [16];
  undefined1 local_2d58 [16];
  undefined1 local_2d48 [16];
  undefined1 local_2d38 [16];
  undefined1 local_2d28 [16];
  undefined1 local_2d18 [16];
  undefined1 local_2d08 [16];
  undefined1 local_2cf8 [16];
  undefined1 local_2ce8 [16];
  undefined1 local_2cd8 [16];
  undefined1 local_2cc8 [16];
  undefined1 local_2cb8 [16];
  undefined1 local_2ca8 [16];
  undefined1 local_2c98 [16];
  undefined1 local_2c88 [16];
  undefined1 local_2c78 [16];
  undefined1 local_2c68 [16];
  undefined1 local_2c58 [16];
  undefined1 local_2c48 [16];
  undefined1 local_2c38 [16];
  undefined1 local_2c28 [16];
  undefined1 local_2c18 [16];
  undefined1 local_2c08 [16];
  undefined1 local_2bf8 [16];
  undefined1 local_2be8 [16];
  undefined1 local_2bd8 [16];
  undefined1 local_2bc8 [16];
  undefined1 local_2bb8 [16];
  undefined1 local_2ba8 [16];
  undefined1 local_2b98 [16];
  undefined1 local_2b88 [16];
  undefined1 local_2b78 [16];
  undefined1 local_2b68 [16];
  undefined1 local_2b58 [16];
  undefined1 local_2b48 [16];
  undefined1 local_2b38 [16];
  undefined1 local_2b28 [16];
  undefined1 local_2b18 [16];
  undefined1 local_2b08 [16];
  undefined1 local_2af8 [16];
  undefined1 local_2ae8 [16];
  undefined1 local_2ad8 [16];
  undefined1 local_2ac8 [16];
  undefined1 local_2ab8 [16];
  undefined1 local_2aa8 [40];
  undefined1 local_2a80 [40];
  undefined1 local_2a58 [40];
  undefined1 local_2a30 [40];
  undefined1 local_2a08 [40];
  undefined1 local_29e0 [40];
  undefined1 local_29b8 [40];
  undefined1 local_2990 [40];
  undefined1 local_2968 [40];
  undefined1 local_2940 [40];
  undefined1 local_2918 [40];
  undefined1 local_28f0 [40];
  undefined1 local_28c8 [40];
  undefined1 local_28a0 [40];
  undefined1 local_2878 [40];
  undefined1 local_2850 [40];
  undefined1 local_2828 [40];
  undefined1 local_2800 [40];
  undefined1 local_27d8 [40];
  undefined1 local_27b0 [40];
  undefined1 local_2788 [40];
  undefined1 local_2760 [40];
  undefined1 local_2738 [112];
  undefined1 local_26c8 [16];
  undefined1 local_26b8 [240];
  undefined1 local_25c8 [32];
  undefined1 local_25a8 [32];
  undefined1 local_2588 [32];
  undefined1 local_2568 [32];
  undefined1 local_2548 [32];
  undefined1 local_2528 [32];
  undefined1 local_2508 [112];
  undefined1 local_2498 [40];
  undefined1 local_2470 [40];
  undefined1 local_2448 [40];
  undefined1 local_2420 [40];
  undefined1 local_23f8 [40];
  undefined1 local_23d0 [40];
  undefined1 local_23a8 [40];
  undefined1 local_2380 [40];
  undefined1 local_2358 [40];
  undefined1 local_2330 [40];
  undefined1 local_2308 [40];
  undefined1 local_22e0 [40];
  undefined1 local_22b8 [40];
  undefined1 local_2290 [40];
  undefined1 local_2268 [40];
  undefined1 local_2240 [40];
  undefined1 local_2218 [40];
  undefined1 local_21f0 [40];
  undefined1 local_21c8 [40];
  undefined1 local_21a0 [40];
  undefined1 local_2178 [40];
  undefined1 local_2150 [40];
  undefined1 local_2128 [40];
  undefined1 local_2100 [40];
  undefined1 local_20d8 [48];
  undefined1 local_20a8 [16];
  undefined1 local_2098 [240];
  undefined1 local_1fa8 [16];
  undefined1 local_1f98 [240];
  undefined1 local_1ea8 [16];
  undefined1 local_1e98 [240];
  undefined1 local_1da8 [16];
  undefined1 local_1d98 [240];
  undefined1 local_1ca8 [16];
  undefined1 local_1c98 [240];
  _NOTIFYICONDATAW local_1ba8 [4];
  undefined4 local_1878;
  undefined8 local_1874;
  undefined8 uStack_186c;
  undefined8 local_1864;
  undefined8 uStack_185c;
  undefined8 local_1854;
  undefined8 uStack_184c;
  undefined8 local_1844;
  undefined8 uStack_183c;
  undefined8 local_1834;
  undefined8 uStack_182c;
  undefined8 local_1824;
  undefined8 uStack_181c;
  undefined8 local_1814;
  undefined8 uStack_180c;
  undefined8 local_1804;
  undefined8 uStack_17fc;
  undefined8 local_17f4;
  undefined4 uStack_17ec;
  undefined4 uStack_17e8;
  undefined4 uStack_17e4;
  undefined8 uStack_17e0;
  undefined1 local_17d8 [32];
  longlong *local_17b8;
  undefined1 local_16f8 [192];
  undefined1 local_1638 [64];
  undefined1 local_15f8 [64];
  HANDLE local_15b8;
  longlong local_15b0;
  undefined1 local_1548 [608];
  _NOTIFYICONDATAW local_12e8;
  undefined1 local_11b8 [512];
  undefined4 local_fb8;
  undefined4 local_f34;
  undefined1 local_f18 [720];
  undefined1 local_c48 [1024];
  undefined1 local_848 [2048];
  undefined8 uStack_48;
  
  uStack_48 = 0x140021e6f;
  uVar15 = 0;
  local_res10[0] = 0;
  if (param_2 == DAT_1404e80f8) {
    DAT_1404df590 = 0xffffffff;
    PostMessageW(DAT_1404e5280,0x411,0,0);
    if ((DAT_1404e52e4 & 0x100000) != 0) {
      if ((DAT_1404df540 >> 9 & 1) != 0) {
        BVar7 = IsDebuggerPresent();
        if (BVar7 != 0) {
          DebugBreak();
        }
        goto LAB_140021ee4;
      }
      DAT_1404e8c20 = DAT_1404e8c20 + 1;
      if (DAT_1404e8c20 == 1) {
        DAT_1404df540 = DAT_1404df540 | 0x200;
      }
      FUN_14006ead0(&DAT_1404e52e0);
      FUN_14001b080();
      DAT_1404e8c20 = DAT_1404e8c20 + -1;
      if (DAT_1404e8c20 == 0) {
        DAT_1404df540 = DAT_1404df540 & 0xfffffdff;
        return 0;
      }
    }
    goto switchD_140021f8c_caseD_1;
  }
  uVar34 = (ushort)param_3;
  uVar35 = (uint)param_3;
  if (0x2e0 < param_2) {
    if (param_2 < 0x402) {
      if (param_2 != 0x401) {
        if (param_2 != 0x312) goto switchD_140021f8c_caseD_3;
        if (DAT_1404e7e8a == '\0') {
          if ((DAT_1404df540 & 0x200) == 0) {
            FUN_140021dd0(&local_732c);
            switch(param_3) {
            case 1:
              PostMessageW(param_1,0x111,0x9c56,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 2:
              PostMessageW(param_1,0x111,0x9c57,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 3:
              PostMessageW(param_1,0x111,0x9c5f,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 4:
              PostMessageW(param_1,0x111,0x9c5d,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 5:
              PostMessageW(param_1,0x111,0x9c5b,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 6:
              bVar5 = FUN_140019160(&DAT_1404e52e0,0x100);
              FUN_1400605f0(&DAT_1404e52e0,0x100,bVar5 ^ 1);
              FUN_14006e0c0(&DAT_1404e52e0);
              FUN_140021e00(&local_732c);
              return 0;
            case 7:
              FUN_14001dee0(0);
              FUN_140021e00(&local_732c);
              return 0;
            case 8:
              PostMessageW(param_1,0x111,0x9c59,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 9:
              PostMessageW(param_1,0x111,0x9c53,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 10:
              PostMessageW(param_1,0x111,0x9c52,0);
              FUN_140021e00(&local_732c);
              return 0;
            case 0xb:
              uVar19 = FUN_140005ee0(local_3b98);
              uVar19 = FUN_140005d20(uVar19,&DAT_140473850);
              uVar19 = FUN_140005c80(uVar19,L"wpxscreensaver64.scr");
              FUN_140005c50(local_4ce0,uVar19);
              thunk_FUN_140016770(local_3b98);
              pWVar13 = (LPCWSTR)FUN_140005c70(local_4ce0);
              ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,pWVar13,L"/s",(LPCWSTR)0x0,5);
              thunk_FUN_140016770(local_4ce0);
              FUN_140021e00(&local_732c);
              return 0;
            }
            iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
            if (iVar10 != 0) {
              local_7304 = uVar35;
              _Var23 = std::_Conditionally_enabled_hash<unsigned_long,1>::operator()
                                 ((_Conditionally_enabled_hash<unsigned_long,1> *)&DAT_1404e8be0,
                                  &local_7304);
              lVar24 = FUN_140035010(&DAT_1404e8be0,local_35f8,&local_7304,_Var23);
              lVar22 = DAT_1404e8be8;
              if (*(longlong *)(lVar24 + 8) != 0) {
                lVar22 = *(longlong *)(lVar24 + 8);
              }
              FUN_1400349f0(&local_7320,lVar22,&DAT_1404e8be8);
              FUN_1400349f0(&local_6f40,DAT_1404e8be8,&DAT_1404e8be8);
              if (local_7320 != local_6f40) {
                lVar22 = FUN_140030c60(&local_7320);
                cVar3 = FUN_14000d010(lVar22 + 8,"wallpaper");
                if (cVar3 != '\0') {
                  lVar22 = FUN_140030c60(&local_7320);
                  lVar24 = FUN_140030c60(&local_7320);
                  lVar22 = FUN_140065cd0(&DAT_1404e52e0,lVar24 + 0x48,lVar22 + 0x28,0,0);
                  if (lVar22 != 0) {
                    lVar22 = FUN_140030c60(&local_7320);
                    FUN_1400674d0(&DAT_1404e52e0,lVar22 + 0x48);
                  }
                  uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2498);
                  FUN_140019f60(uVar19);
                  FUN_140021e00(&local_732c);
                  return 0;
                }
                lVar22 = FUN_140030c60(&local_7320);
                cVar3 = FUN_14000d010(lVar22 + 8,"playlist");
                if (cVar3 != '\0') {
                  FUN_140084dd0(local_67d8,0);
                  FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_67d8);
                  cVar3 = FUN_1400888a0(local_67d8);
                  if ((cVar3 != '\0') && (iVar10 = FUN_1400863a0(local_67d8), iVar10 != 0)) {
                    FUN_140088a90(local_67d8,local_7108);
                    FUN_140088ad0(local_67d8,local_6bc0);
                    cVar3 = FUN_140017580(local_7108,local_6bc0);
                    if (cVar3 != '\0') {
                      do {
                        uVar19 = FUN_140017600(local_7108);
                        FUN_140085090(local_57a8,uVar19);
                        puVar18 = (undefined4 *)FUN_1400170d0(local_35e8,&DAT_1404748b8);
                        local_7348 = *puVar18;
                        uStack_7344 = puVar18[1];
                        uStack_7340 = puVar18[2];
                        uStack_733c = puVar18[3];
                        uVar19 = FUN_140087640(local_57a8,&local_7348);
                        cVar3 = FUN_140088890(uVar19);
                        if (cVar3 == '\0') {
LAB_1400278e9:
                          bVar39 = false;
                        }
                        else {
                          lVar22 = FUN_140030c60(&local_7320);
                          uVar15 = 0x40;
                          uVar19 = FUN_140085cc0(uVar19,local_3b78);
                          cVar3 = FUN_14000d0f0(uVar19,lVar22 + 0x28);
                          if (cVar3 == '\0') goto LAB_1400278e9;
                          bVar39 = true;
                        }
                        if (uVar15 != 0) {
                          uVar15 = 0;
                          thunk_FUN_140017240(local_3b78);
                        }
                        if (bVar39) {
                          lVar22 = FUN_140030c60(&local_7320);
                          cVar3 = FUN_14001d3c0(local_57a8,lVar22 + 0x48,0);
                          if (cVar3 != '\0') {
                            uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2470);
                            FUN_140019f60(uVar19);
                          }
                          FUN_140085440(local_57a8);
                          break;
                        }
                        FUN_140085440(local_57a8);
                        FUN_1400175a0(local_7108);
                        cVar3 = FUN_140017580(local_7108,local_6bc0);
                        if (cVar3 == '\0') {
                          FUN_140085440(local_67d8);
                          FUN_140021e00(&local_732c);
                          return 0;
                        }
                      } while( true );
                    }
                  }
                  FUN_140085440(local_67d8);
                  FUN_140021e00(&local_732c);
                  return 0;
                }
                lVar22 = FUN_140030c60(&local_7320);
                cVar3 = FUN_14000d010(lVar22 + 8,"profile");
                if (cVar3 != '\0') {
                  FUN_140084dd0(local_6828,0);
                  FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_6828);
                  cVar3 = FUN_1400888a0(local_6828);
                  if ((cVar3 != '\0') && (iVar10 = FUN_1400863a0(local_6828), iVar10 != 0)) {
                    FUN_140088a90(local_6828,local_7118);
                    FUN_140088ad0(local_6828,local_6bb0);
                    cVar3 = FUN_140017580(local_7118,local_6bb0);
                    while (cVar3 != '\0') {
                      uVar19 = FUN_140017600(local_7118);
                      FUN_140085090(local_5328,uVar19);
                      puVar18 = (undefined4 *)FUN_1400170d0(local_35d8,&DAT_1404748b8);
                      local_7348 = *puVar18;
                      uStack_7344 = puVar18[1];
                      uStack_7340 = puVar18[2];
                      uStack_733c = puVar18[3];
                      uVar19 = FUN_140087640(local_5328,&local_7348);
                      cVar3 = FUN_140088890(uVar19);
                      if (cVar3 == '\0') {
LAB_140027afa:
                        bVar39 = false;
                      }
                      else {
                        lVar22 = FUN_140030c60(&local_7320);
                        uVar15 = 0x80;
                        uVar19 = FUN_140085cc0(uVar19,local_3b58);
                        cVar3 = FUN_14000d0f0(uVar19,lVar22 + 0x28);
                        if (cVar3 == '\0') goto LAB_140027afa;
                        bVar39 = true;
                      }
                      if ((char)uVar15 < '\0') {
                        uVar15 = 0;
                        thunk_FUN_140017240(local_3b58);
                      }
                      if (bVar39) {
                        FUN_14001dc40(local_5328);
                      }
                      FUN_140085440(local_5328);
                      FUN_1400175a0(local_7118);
                      cVar3 = FUN_140017580(local_7118,local_6bb0);
                    }
                  }
                  FUN_140085440(local_6828);
                }
              }
            }
            FUN_140021e00(&local_732c);
            return 0;
          }
          if ((DAT_1404dfbb3 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
            DebugBreak();
          }
          DAT_1404dfbb3 = '\0';
          goto LAB_140021ee4;
        }
        goto switchD_140021f8c_caseD_1;
      }
      iVar10 = *param_4;
      if (0x12d < iVar10) {
        if (iVar10 == 0x12e) {
          FUN_140016fa0(local_62c0);
          thunk_FUN_14000f880(local_62c0,*(undefined8 *)(param_4 + 2),param_4[1]);
          FUN_140084dd0(local_5008,0);
          cVar3 = FUN_140017840(local_62c0,local_5008,0);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_2e48,&DAT_140473b68);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_5008,&local_7348);
            cVar3 = FUN_140088890(uVar19);
            if (cVar3 != '\0') {
              cVar3 = FUN_1400182c0(&DAT_1404e64d0);
              if (cVar3 == '\0') {
                FUN_14003aa00(param_1,0x111,0x9c59,0);
              }
              cVar3 = FUN_1400182c0(&DAT_1404e64d0);
              if (cVar3 != '\0') {
                FUN_140018240(local_4ec0,0x79,local_62c0);
                FUN_1400182d0(&DAT_1404e64d0,local_4ec0);
                FUN_140084550(&DAT_1404e64d0);
                FUN_140018220(local_4ee0,1);
                FUN_1400182d0(&DAT_1404e64d0,local_4ee0);
                FUN_1400182b0(local_4ee0);
                FUN_1400182b0(local_4ec0);
              }
            }
          }
          FUN_140085440(local_5008);
          thunk_FUN_140017240(local_62c0);
          return 0;
        }
        if (iVar10 != 400) goto switchD_140021f8c_caseD_1;
        FUN_140016fa0(local_5618);
        thunk_FUN_14000f880(local_5618,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6ad0,0);
        cVar3 = FUN_140017840(local_5618,local_6ad0,0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2ef8,"browsewallpapers");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6ad0,&local_7348);
          cVar3 = FUN_1400886d0(uVar19);
          if (cVar3 == '\0') {
LAB_14002d3fd:
            cVar3 = '\0';
          }
          else {
            puVar18 = (undefined4 *)FUN_1400170d0(local_2ee8,"browsewallpapers");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6ad0,&local_7348);
            cVar3 = FUN_140086300(uVar19);
            if (cVar3 == '\0') goto LAB_14002d3fd;
            cVar3 = '\x01';
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_2ed8,"ledplugin");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6ad0,&local_7348);
          cVar6 = FUN_1400886d0(uVar19);
          if (cVar6 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_2ec8,"ledplugin");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6ad0,&local_7348);
            cVar6 = FUN_140086300(uVar19);
            if (cVar6 != '\0') {
              FUN_140084dd0(local_6aa8,0);
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_6aa8);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2eb8,"plugins");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              cVar6 = FUN_140088340(local_6aa8,&local_7348);
              if (cVar6 == '\0') {
                uVar19 = FUN_140084dd0(local_2800,7);
                puVar18 = (undefined4 *)FUN_1400170d0(local_2ea8,"plugins");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar31 = FUN_140087640(local_6aa8,&local_7348);
                FUN_140085610(uVar31,uVar19);
                FUN_140085440(local_2800);
              }
              puVar18 = (undefined4 *)FUN_1400170d0(local_2e98,"plugins");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6aa8,&local_7348);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2ca8,"ledextensions");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              cVar6 = FUN_140088340(uVar19,&local_7348);
              if (cVar6 == '\0') {
                uVar31 = FUN_140084dd0(local_27d8,7);
                puVar18 = (undefined4 *)FUN_1400170d0(local_2e88,"ledextensions");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar32 = FUN_140087640(uVar19,&local_7348);
                FUN_140085610(uVar32,uVar31);
                FUN_140085440(local_27d8);
              }
              FUN_140085070(local_4140,0);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2e78,"ledextensions");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(uVar19,&local_7348);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2e68,"enabled");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(uVar19,&local_7348);
              FUN_140085610(uVar19,local_4140);
              FUN_140085440(local_4140);
              FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_6aa8);
              FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
              FUN_140084dd0(local_5030,7);
              FUN_140085070(local_4118,cVar3);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2e58,"browsewallpapers");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_5030,&local_7348);
              FUN_140085610(uVar19,local_4118);
              FUN_140085440(local_4118);
              uVar19 = FUN_140004d00(local_3858,local_5030,0);
              FUN_140018240(local_4f00,0xcd,uVar19);
              thunk_FUN_140017240(local_3858);
              FUN_14003aa00(DAT_1404e5280,0x401,0,local_4f00);
              FUN_1400182b0(local_4f00);
              FUN_140085440(local_5030);
              FUN_140085440(local_6aa8);
              FUN_140085440(local_6ad0);
              thunk_FUN_140017240(local_5618);
              return 0;
            }
          }
          if (cVar3 != '\0') {
            DAT_1404df540 = DAT_1404df540 | 0x80;
            UVar33 = 0x111;
            lParam = 1;
            wParam = 0x9c59;
            goto LAB_14002d7a0;
          }
        }
        lParam = 0;
        UVar33 = 0x407;
        wParam = 0;
LAB_14002d7a0:
        PostMessageW(param_1,UVar33,wParam,lParam);
        FUN_140085440(local_6ad0);
        thunk_FUN_140017240(local_5618);
        return 0;
      }
      if (iVar10 == 0x12d) {
        FUN_1400172c0(local_62e0);
        FUN_140016f80(local_62e0);
        FUN_14000f880(local_62e0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6a80,0);
        cVar3 = FUN_140017840(local_62e0,local_6a80,0);
        if (cVar3 != '\0') {
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"editor",local_6a80);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
        }
        FUN_140086d30(local_6a80);
        local_6a80[0] = 0;
        if (local_6a70[0] != 0) {
          FUN_140089280(local_6a70);
        }
        FUN_140017240(local_62e0);
        return 0;
      }
      switch(iVar10) {
      case 2:
        FUN_140016fa0(local_64e0);
        thunk_FUN_14000f880(local_64e0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_7010,0);
        cVar3 = FUN_140017840(local_64e0,local_7010,0);
        if (cVar3 != '\0') {
          bVar39 = false;
          puVar18 = (undefined4 *)FUN_1400170d0(local_35c8,"group");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085cc0(uVar19,local_4d00);
          puVar18 = (undefined4 *)FUN_1400170d0(local_35b8,"wallpaperconfig");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085090(local_6e90,uVar19);
          cVar3 = FUN_1400888b0(local_6e90);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_140019050(&PTR_s_wallpaperconfig_1404df5a0), cVar3 == '\0')) {
            bVar39 = true;
            uVar19 = FUN_140017110(local_4d00);
            FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,uVar19,local_6e90);
            puVar18 = (undefined4 *)FUN_1400170d0(local_35a8,"wallpaperconfigvdesktop");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_7010,&local_7348);
            cVar3 = FUN_1400888b0(uVar19);
            if (cVar3 != '\0') {
              FUN_140044670(&PTR_s_wallpaperconfig_1404df5a0,uVar19);
            }
            iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
            if (iVar10 != 0) {
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                            local_6e90);
              FUN_14006a490(&DAT_1404e52e0,local_6e90);
            }
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_3598,"wallpaperconfigscreensaver");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085520(local_6e90,uVar19);
          cVar3 = FUN_1400888b0(local_6e90);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_140019050(&PTR_s_wallpaperconfig_1404df5a0), cVar3 == '\0')) {
            FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver",local_6e90);
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_3588,"wproperties");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085090(local_52d8,uVar19);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3578,"wpropertiesvd");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085090(local_4398,uVar19);
          cVar3 = FUN_1400888b0(local_52d8);
          if (cVar3 != '\0') {
            FUN_1400444c0(&PTR_s_wallpaperconfig_1404df5a0,local_52d8,local_4398);
            uVar19 = FUN_1400191f0(&DAT_1404e52e0);
            FUN_140030ee0(uVar19,local_72c0);
            FUN_140030820(uVar19,local_7238);
            cVar3 = FUN_14000ff10(local_72c0,local_7238);
            while (cVar3 == '\0') {
              lVar22 = FUN_140030c60(local_72c0);
              plVar16 = *(longlong **)(lVar22 + 0x20);
              if (plVar16 != (longlong *)0x0) {
                FUN_140084dd0(local_5e50,0);
                uVar19 = FUN_140019090(plVar16);
                uVar19 = FUN_140017110(uVar19);
                uVar31 = FUN_140017110(lVar22);
                cVar3 = FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,uVar31,uVar19,local_5e50);
                lVar22 = *plVar16;
                if (cVar3 == '\0') {
                  uVar19 = (**(code **)(lVar22 + 0x90))(plVar16,local_2a80);
                  FUN_140085610(local_5e50,uVar19);
                  FUN_140085440(local_2a80);
                  pcVar1 = *(code **)(*plVar16 + 0x80);
                  uVar19 = FUN_140085090(local_2420,local_5e50);
                  (*pcVar1)(plVar16,uVar19);
                }
                else {
                  pcVar1 = *(code **)(lVar22 + 0x80);
                  uVar19 = (**(code **)(lVar22 + 0x90))(plVar16,local_2aa8);
                  uVar19 = FUN_140017fb0(local_2448,uVar19,local_5e50);
                  (*pcVar1)(plVar16,uVar19);
                  FUN_140085440(local_2aa8);
                }
                FUN_140085440(local_5e50);
              }
              FUN_140030dd0(local_72c0);
              cVar3 = FUN_14000ff10(local_72c0);
            }
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_3568,&DAT_1404737fc);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7010,&local_7348);
          FUN_140085090(local_6850,uVar19);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3558,"usermonitors");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          FUN_1400878f0(local_6850,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3548,"overridelockscreen");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          FUN_1400878f0(local_6850,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3538,"overridewallpaper");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          FUN_1400878f0(local_6850,&local_7348);
          cVar3 = FUN_1400888b0(local_6850);
          if (cVar3 != '\0') {
            FUN_14001b3a0(&DAT_1404e52e0,local_6850,1);
          }
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          FUN_14006e0c0(&DAT_1404e52e0);
          FUN_14006e6d0(&DAT_1404e52e0);
          if ((char)DAT_1404df540 < '\0') {
            DAT_1404df540 = DAT_1404df540 & 0xffffff7f;
            PostMessageW(param_1,0x407,0,0);
          }
          if ((bVar39) &&
             (iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver"),
             iVar10 == 0)) {
            FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
            FUN_140084dd0(local_5300,0);
            FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                          local_5300);
            FUN_14006a490(&DAT_1404e52e0,local_5300);
            FUN_140085440(local_5300);
          }
          FUN_140085440(local_6850);
          FUN_140085440(local_4398);
          FUN_140085440(local_52d8);
          FUN_140085440(local_6e90);
          thunk_FUN_140017240(local_4d00);
        }
        FUN_140085440(local_7010);
        thunk_FUN_140017240(local_64e0);
        return 0;
      case 3:
        cVar3 = FUN_1400182c0(&DAT_1404e64d0);
        if (cVar3 != '\0') {
          FUN_1400182d0(&DAT_1404e64d0,param_4);
        }
        cVar3 = FUN_1400182c0(&DAT_1404e6a70);
        if (cVar3 != '\0') {
          FUN_1400182d0(&DAT_1404e6a70,param_4);
        }
        if ((param_3 != 0) && (cVar3 = FUN_1400182c0(&DAT_1404e67a0), cVar3 != '\0')) {
          FUN_1400182d0(&DAT_1404e67a0,param_4);
          return 0;
        }
        break;
      case 4:
        FUN_14001e2c0();
        return 0;
      case 5:
        FUN_140016fa0(local_5c28);
        cVar3 = FUN_140046870(&PTR_s_wallpaperconfig_1404df5a0,local_5c28,0);
        if (cVar3 != '\0') {
          FUN_140018240(local_64c0,5,local_5c28);
          cVar3 = FUN_1400182c0(&DAT_1404e64d0);
          if (cVar3 != '\0') {
            FUN_1400182d0(&DAT_1404e64d0,local_64c0);
          }
          cVar3 = FUN_1400182c0(&DAT_1404e6a70);
          if (cVar3 != '\0') {
            FUN_1400182d0(&DAT_1404e6a70,local_64c0);
          }
          cVar3 = FUN_1400182c0(&DAT_1404e67a0);
          if (cVar3 != '\0') {
            FUN_1400182d0(&DAT_1404e67a0,local_64c0);
          }
          FUN_1400182b0(local_64c0);
        }
        thunk_FUN_140017240(local_5c28);
        return 0;
      case 6:
        FUN_140016fa0(local_6460);
        thunk_FUN_14000f880(local_6460,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5780,0);
        cVar3 = FUN_140017840(local_6460,local_5780,0);
        if (cVar3 != '\0') {
          FUN_140084dd0(local_6878,7);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"shared",local_6878);
          uVar19 = FUN_140017fb0(local_2a58,local_6878,local_5780);
          FUN_140085610(local_6878,uVar19);
          FUN_140085440(local_2a58);
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"shared",local_6878);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          FUN_14001a630(local_6878);
          FUN_140085440(local_6878);
        }
        FUN_140085440(local_5780);
        thunk_FUN_140017240(local_6460);
        return 0;
      case 7:
        FUN_140016fa0(local_5c08);
        thunk_FUN_14000f880(local_5c08,*(undefined8 *)(param_4 + 2),param_4[1]);
        uVar19 = FUN_140017110(local_5c08);
        iVar10 = FUN_1402c82c0(uVar19);
        DAT_1404e7e8a = iVar10 == 0;
        thunk_FUN_140017240(local_5c08);
        return 0;
      case 8:
        cVar3 = FUN_1400182c0(&DAT_1404e67a0);
        if (cVar3 != '\0') {
          FUN_140084130(&DAT_1404e67a0);
          FUN_1400844b0(&DAT_1404e67a0,3000,0);
        }
        FUN_140084dd0(local_5758,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5758);
        FUN_140085070(local_4370,0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_34e8,"uiskinseasonal");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5758,&local_7348);
        FUN_140085610(uVar19,local_4370);
        FUN_140085440(local_4370);
        FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5758);
        FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140019350(0);
        FUN_140085440(local_5758);
        return 0;
      case 9:
        FUN_140016fa0(local_6280);
        thunk_FUN_14000f880(local_6280,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5e28,0);
        cVar3 = FUN_140017840(local_6280,local_5e28,0);
        if (cVar3 != '\0') {
          FUN_140084dd0(local_6d68,7);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_6d68);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3528,"usermonitors");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6d68,&local_7348);
          cVar3 = FUN_1400888b0(uVar19);
          if (cVar3 == '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_34f8,"usermonitors");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6d68,&local_7348);
            FUN_140085520(uVar19,local_5e28);
          }
          else {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3518,"usermonitors");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6d68,&local_7348);
            uVar19 = FUN_140017fb0(local_2a30,uVar19,local_5e28);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3508,"usermonitors");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar31 = FUN_140087640(local_6d68,&local_7348);
            FUN_140085610(uVar31,uVar19);
            FUN_140085440(local_2a30);
          }
          FUN_14001b3a0(&DAT_1404e52e0,local_6d68,0);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          FUN_140085440(local_6d68);
        }
        FUN_140085440(local_5e28);
        thunk_FUN_140017240(local_6280);
        return 0;
      case 10:
        FUN_140016fa0(local_6260);
        thunk_FUN_14000f880(local_6260,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_68a0,0);
        cVar3 = FUN_140017840(local_6260,local_68a0,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_68a0), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_34d8,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_68a0,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_34c8,"settings");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar31 = FUN_140087640(local_68a0,&local_7348);
          cVar3 = FUN_1400888b0(uVar31);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_34b8,"transition");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar32 = FUN_140087640(uVar31,&local_7348);
            cVar3 = FUN_140088890(uVar32);
            if (cVar3 != '\0') {
              puVar18 = (undefined4 *)FUN_1400170d0(local_34a8,"transitiontime");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar32 = FUN_140087640(uVar31,&local_7348);
              cVar3 = FUN_140088880(uVar32);
              if (cVar3 != '\0') {
                FUN_140016fa0(local_5be8);
                cVar3 = FUN_140088890(uVar19);
                if (cVar3 != '\0') {
                  uVar19 = FUN_140085cc0(uVar19,local_3b38);
                  FUN_14000de40(local_5be8,uVar19);
                  thunk_FUN_140017240(local_3b38);
                }
                puVar18 = (undefined4 *)FUN_1400170d0(local_3498,"transitiontime");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(uVar31,&local_7348);
                uVar9 = FUN_140085ee0(uVar19);
                puVar18 = (undefined4 *)FUN_1400170d0(local_3488,"transition");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(uVar31,&local_7348);
                uVar19 = FUN_140085ca0(uVar19);
                FUN_140069bb0(&DAT_1404e52e0,local_5be8,uVar19,uVar9);
                thunk_FUN_140017240(local_5be8);
              }
            }
          }
        }
        FUN_140085440(local_68a0);
        thunk_FUN_140017240(local_6260);
        return 0;
      case 0x65:
        FUN_140016fa0(local_6220);
        thunk_FUN_14000f880(local_6220,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6f10,0);
        cVar3 = FUN_140017840(local_6220,local_6f10,0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3478,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f10,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3468,&DAT_140473b68);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6f10,&local_7348);
            cVar3 = FUN_140088890(uVar19);
            if (cVar3 != '\0') {
              puVar18 = (undefined4 *)FUN_1400170d0(local_3458,&DAT_140473b68);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6f10,&local_7348);
              FUN_140085cc0(uVar19,local_4d80);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3448,"location");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6f10,&local_7348);
              FUN_140085cc0(uVar19,local_6240);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3438,&DAT_140474874);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6f10,&local_7348);
              cVar3 = FUN_140088890(uVar19);
              uVar20 = uVar15;
              if (cVar3 != '\0') {
                puVar18 = (undefined4 *)FUN_1400170d0(local_3428,&DAT_140474874);
                uVar20 = 4;
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_6f10,&local_7348);
                uVar19 = FUN_140085cc0(uVar19,local_3b18);
                cVar3 = FUN_14000d010(uVar19,&DAT_140474e80);
                if (cVar3 != '\0') {
                  uVar15 = 2;
                }
              }
              if (uVar20 != 0) {
                thunk_FUN_140017240(local_3b18);
              }
              cVar3 = FUN_140019190(&DAT_1404e52e0);
              if (cVar3 != '\0') {
                FUN_14006eaf0(&DAT_1404e52e0,0);
              }
              cVar3 = FUN_1400191a0(&DAT_1404e52e0);
              if (cVar3 != '\0') {
                FUN_14006eb10(&DAT_1404e52e0,0);
              }
              lVar22 = FUN_140065cd0(&DAT_1404e52e0,local_6240,local_4d80,uVar15,0);
              uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_23f8);
              FUN_140019f60(uVar19);
              if (lVar22 == 0) {
                uVar19 = FUN_140019200(&DAT_1404e52e0);
                uVar19 = FUN_1400307a0(uVar19,local_5d38,local_6240);
                uVar31 = FUN_140019200(&DAT_1404e52e0);
                uVar31 = FUN_140030820(uVar31,local_5d30);
                cVar3 = FUN_14000ff10(uVar19,uVar31);
                if (cVar3 != '\0') {
                  FUN_140018220(local_4d60,0x7f);
                  FUN_1400182d0(&DAT_1404e64d0,local_4d60);
                  FUN_1400182b0(local_4d60);
                }
              }
              else {
                uVar19 = FUN_14001c0a0(local_2a08,lVar22,local_6240);
                FUN_140004d00(local_4d40,uVar19,0);
                FUN_140085440(local_2a08);
                FUN_140018240(local_4d20,0x6a,local_4d40);
                FUN_1400182d0(&DAT_1404e64d0,local_4d20);
                FUN_1400182b0(local_4d20);
                thunk_FUN_140017240(local_4d40);
              }
              thunk_FUN_140017240(local_6240);
              thunk_FUN_140017240(local_4d80);
            }
          }
        }
        FUN_140085440(local_6f10);
        thunk_FUN_140017240(local_6220);
        return 0;
      case 0x66:
        FUN_140016fa0(local_6200);
        thunk_FUN_14000f880(local_6200,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6d40,0);
        cVar3 = FUN_140017840(local_6200,local_6d40,0);
        if (cVar3 == '\0') goto LAB_140028e4a;
        puVar18 = (undefined4 *)FUN_1400170d0(local_3418,"location");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6d40,&local_7348);
        cVar3 = FUN_140088890(uVar19);
        if (cVar3 == '\0') goto LAB_140028e4a;
        puVar18 = (undefined4 *)FUN_1400170d0(local_3408,"location");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6d40,&local_7348);
        FUN_140085cc0(uVar19,local_4da0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_33f8,"playlist");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6d40,&local_7348);
        cVar3 = FUN_1400886d0(uVar19);
        if (cVar3 == '\0') {
LAB_140028e0d:
          uVar19 = 0;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_33e8,"playlist");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6d40,&local_7348);
          cVar3 = FUN_140086300(uVar19);
          if (cVar3 == '\0') goto LAB_140028e0d;
          uVar19 = 1;
        }
        FUN_140066370(&DAT_1404e52e0,local_4da0,uVar19);
        uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_23d0);
        FUN_140019f60(uVar19);
        thunk_FUN_140017240(local_4da0);
LAB_140028e4a:
        FUN_140085440(local_6d40);
        thunk_FUN_140017240(local_6200);
        return 0;
      case 0x67:
        FUN_140016fa0(local_5918);
        thunk_FUN_14000f880(local_5918,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5730,0);
        cVar3 = FUN_140017840(local_5918,local_5730,0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_33d8,"layout");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5730,&local_7348);
          cVar3 = FUN_140088880(uVar19);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_33c8,"layout");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_5730,&local_7348);
            uVar9 = FUN_140085ee0(uVar19);
            FUN_140084dd0(local_5e00,0);
            FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                          local_5e00);
            FUN_140084ef0(local_4348,uVar9);
            puVar18 = (undefined4 *)FUN_1400170d0(local_33b8,"layout");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_5e00,&local_7348);
            FUN_140085610(uVar19,local_4348);
            FUN_140085440(local_4348);
            FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                          local_5e00);
            FUN_14006a490(&DAT_1404e52e0,local_5e00);
            FUN_14001cc50(0);
            FUN_140085440(local_5e00);
          }
        }
        FUN_140085440(local_5730);
        thunk_FUN_140017240(local_5918);
        return 0;
      case 0x68:
        uVar19 = FUN_140017170(local_2548,"-nowallpapers");
        FUN_140031a60(&DAT_1404e8b20,uVar19);
        FUN_140065bb0(&DAT_1404e52e0,local_5708);
        FUN_140084dd0(local_60f8,7);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3368,"config");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_60f8,&local_7348);
        FUN_140085520(uVar19,local_5708);
        FUN_14000ef10(local_20a8,1);
        iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
        if (iVar10 != 0) {
          uVar19 = FUN_1400191f0(&DAT_1404e52e0);
          FUN_140030ee0(uVar19,local_72b8);
          FUN_140030820(uVar19,local_7230);
          cVar3 = FUN_14000ff10(local_72b8,local_7230);
          uVar20 = uVar15;
          if (cVar3 == '\0') {
            do {
              lVar24 = FUN_140030c60(local_72b8);
              lVar22 = *(longlong *)(lVar24 + 0x20);
              if (lVar22 != 0) {
                if (0 < (int)uVar15) {
                  FUN_14000c990(local_2098,&DAT_140474e90);
                }
                FUN_14010c420(lVar22,local_5958);
                cVar3 = FUN_140016930(local_5958);
                if (cVar3 == '\0') {
                  FUN_14000cbc0(local_2098,local_5958);
                  uVar15 = (ulonglong)((int)uVar15 + 1);
                }
                FUN_140065be0(&DAT_1404e52e0,local_52b0,lVar24);
                puVar18 = (undefined4 *)FUN_1400170d0(local_3358,"playlist");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_52b0,&local_7348);
                cVar3 = FUN_1400888b0(uVar19);
                if (cVar3 != '\0') {
                  puVar18 = (undefined4 *)FUN_1400170d0(local_3348,"playlist");
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(local_52b0,&local_7348);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_3338,&DAT_14047491c);
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(uVar19,&local_7348);
                  cVar3 = FUN_1400888a0(uVar19);
                  if (cVar3 != '\0') {
                    iVar10 = FUN_1400863a0(uVar19);
                    uVar20 = (ulonglong)(uint)((int)uVar20 + iVar10);
                  }
                }
                FUN_140085440(local_52b0);
                thunk_FUN_140017240(local_5958);
              }
              FUN_140030dd0(local_72b8);
              cVar3 = FUN_14000ff10(local_72b8,local_7230);
            } while (cVar3 == '\0');
            if (0 < (int)uVar15) {
              if (0 < (int)uVar20) {
                uVar19 = FUN_14000c990(local_2098,&DAT_140473ef8);
                uVar19 = FUN_140032190(uVar19,uVar20);
                FUN_14000c990(uVar19,&DAT_140474e94);
              }
              uVar19 = FUN_14000ee70(local_20a8,local_3af8);
              FUN_140084fe0(local_4320,uVar19);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3328,"title");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_60f8,&local_7348);
              FUN_140085610(uVar19,local_4320);
              FUN_140085440(local_4320);
              thunk_FUN_140017240(local_3af8);
              FUN_140085070(local_42f8,0 < (int)uVar20);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3318,"playlist");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_60f8,&local_7348);
              FUN_140085610(uVar19,local_42f8);
              FUN_140085440(local_42f8);
              FUN_140084dd0(local_7178,0);
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigrecent",local_7178);
              cVar3 = FUN_1400888a0(local_7178);
              if (cVar3 == '\0') {
                uVar19 = FUN_140084dd0(local_29e0,6);
                FUN_140085610(local_7178,uVar19);
                FUN_140085440(local_29e0);
              }
              FUN_140085090(local_42a8,local_5708);
              FUN_140004d00(local_4dc0,local_42a8,0);
              uVar35 = 0;
              iVar10 = FUN_1400863a0(local_7178);
              if (iVar10 != 0) {
                do {
                  uVar19 = thunk_FUN_140086540(local_7178,uVar35);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_3308,"config");
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(uVar19,&local_7348);
                  FUN_140085090(local_42d0,uVar19);
                  uVar19 = FUN_140004d00(local_3ad8,local_42d0,0);
                  cVar3 = FUN_14000d0f0(uVar19,local_4dc0);
                  thunk_FUN_140017240(local_3ad8);
                  if (cVar3 != '\0') {
                    FUN_140087f40(local_7178,uVar35);
                    uVar35 = uVar35 - 1;
                  }
                  FUN_140085440(local_42d0);
                  uVar35 = uVar35 + 1;
                  uVar36 = FUN_1400863a0(local_7178);
                } while (uVar35 < uVar36);
              }
              uVar35 = FUN_1400863a0(local_7178);
              if (9 < uVar35) {
                FUN_140087f40(local_7178,0,0);
              }
              FUN_140087650(local_7178,local_60f8);
              FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigrecent",local_7178);
              thunk_FUN_140017240(local_4dc0);
              FUN_140085440(local_42a8);
              FUN_140085440(local_7178);
            }
          }
        }
        FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140019350(0);
        FUN_1400846c0(&DAT_1404e64d0);
        FUN_140031fa0(&DAT_1404df550);
        FUN_140031e20(&DAT_1404df550);
        cVar3 = FUN_140019050(&PTR_s_wallpaperconfig_1404df5a0);
        if (cVar3 == '\0') {
          iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
          if (iVar10 == 0) {
            FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
            FUN_140084dd0(local_5288,0);
            FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                          local_5288);
            FUN_14006a490(&DAT_1404e52e0,local_5288);
            FUN_140085440(local_5288);
          }
          else {
            FUN_14006a490(&DAT_1404e52e0,local_5708);
          }
        }
        else {
          FUN_140085090(local_4280,&DAT_1404e63a0);
          FUN_14006a490(&DAT_1404e52e0,local_4280);
          FUN_140085440(local_4280);
        }
        cVar3 = FUN_140067970(&DAT_1404e52e0,0);
        if (cVar3 != '\0') {
          FUN_14001e4f0();
        }
        if ((char)DAT_1404df540 < '\0') {
          DAT_1404df540 = DAT_1404df540 & 0xffffff7f;
          PostMessageW(param_1,0x407,0,0);
        }
        FUN_14001dce0();
        FUN_1400056d0(local_20a8);
        FUN_140085440(local_60f8);
        FUN_140085440(local_5708);
        return 0;
      case 0x69:
        FUN_140016fa0(local_61e0);
        thunk_FUN_14000f880(local_61e0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6058,0);
        cVar3 = FUN_140017840(local_61e0,local_6058,0);
        if (cVar3 != '\0') {
          FUN_140084dd0(local_68f0,6);
          FUN_140084dd0(local_60d0,6);
          puVar18 = (undefined4 *)FUN_1400170d0(local_32f8,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6058,&local_7348);
          FUN_140085cc0(uVar19,local_5978);
          puVar18 = (undefined4 *)FUN_1400170d0(local_32e8,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6058,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
            cVar3 = FUN_1400888a0(uVar19);
            if (cVar3 != '\0') {
              FUN_140085520(local_68f0,uVar19);
              FUN_140088a90(uVar19,local_70c8);
              FUN_140088ad0(uVar19,local_6ba0);
              cVar3 = FUN_140017580(local_70c8,local_6ba0);
              while (cVar3 != '\0') {
                uVar19 = FUN_140017600(local_70c8);
                FUN_140084dd0(local_5238,0);
                uVar19 = FUN_140085ca0(uVar19);
                uVar31 = FUN_140017110(local_5978);
                FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,uVar31,uVar19,local_5238);
                FUN_140087650(local_60d0,local_5238);
                FUN_140085440(local_5238);
                FUN_1400175a0(local_70c8);
                cVar3 = FUN_140017580(local_70c8);
              }
            }
          }
          else {
            FUN_140084dd0(local_5260,0);
            uVar31 = FUN_140085ca0(uVar19);
            uVar32 = FUN_140017110(local_5978);
            FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,uVar32,uVar31,local_5260);
            FUN_140087650(local_68f0,uVar19);
            FUN_140087650(local_60d0,local_5260);
            FUN_140085440(local_5260);
          }
          FUN_140084dd0(local_6918,0);
          iVar10 = FUN_1400863a0(local_68f0);
          if (iVar10 == 1) {
            uVar19 = thunk_FUN_140086540(local_68f0,0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_32d8,&DAT_140473b68);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar31 = FUN_140087640(local_6918,&local_7348);
            FUN_140085520(uVar31,uVar19);
            puVar17 = (undefined1 *)thunk_FUN_140086540(local_60d0,0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_32c8,"properties");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6918,&local_7348);
          }
          else {
            puVar18 = (undefined4 *)FUN_1400170d0(local_32b8,&DAT_140473b68);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6918,&local_7348);
            FUN_140085520(uVar19,local_68f0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_32a8,"properties");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6918,&local_7348);
            puVar17 = local_60d0;
          }
          FUN_140085520(uVar19,puVar17);
          uVar19 = FUN_140004d00(local_3ab8,local_6918,0);
          FUN_140018240(local_4de0,0x69,uVar19);
          thunk_FUN_140017240(local_3ab8);
          FUN_1400182d0(&DAT_1404e64d0,local_4de0);
          FUN_1400182b0(local_4de0);
          FUN_140085440(local_6918);
          thunk_FUN_140017240(local_5978);
          FUN_140085440(local_60d0);
          FUN_140085440(local_68f0);
        }
        FUN_140085440(local_6058);
        thunk_FUN_140017240(local_61e0);
        return 0;
      case 0x6b:
        FUN_140016fa0(local_6af0);
        thunk_FUN_14000f880(local_6af0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_7088,0);
        cVar3 = FUN_140017840(local_6af0,local_7088,0);
        if (cVar3 == '\0') goto LAB_140029ea4;
        if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9130) &&
           (FUN_14028b140(&DAT_1404e9130), DAT_1404e9130 == -1)) {
          FUN_14028b410(FUN_1404245d0);
          _Init_thread_footer(&DAT_1404e9130);
        }
        uVar19 = FUN_1400187a0(&DAT_1404e64d0);
        cVar3 = FUN_1400821c0(uVar19,local_7288);
        if ((cVar3 == '\0') || (local_7288[0] != 0x6b)) {
          bVar39 = false;
          cVar3 = FUN_140016930(&DAT_1404dfbc0);
          if (cVar3 == '\0') goto LAB_140029d24;
LAB_140029f22:
          puVar18 = (undefined4 *)FUN_1400170d0(local_3248,"properties");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7088,&local_7348);
          cVar3 = FUN_1400888b0(uVar19);
          if (cVar3 == '\0') goto LAB_140029ea4;
          puVar18 = (undefined4 *)FUN_1400170d0(local_3238,"properties");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7088,&local_7348);
          FUN_140085090(local_6030,uVar19);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3228,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7088,&local_7348);
          FUN_140085cc0(uVar19,local_4e00);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3218,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7088,&local_7348);
          FUN_140085cc0(uVar19,local_5998);
          FUN_140084dd0(local_5210,0);
          uVar19 = FUN_1400191f0(&DAT_1404e52e0);
          FUN_140030de0(uVar19,local_7300,local_5998);
          uVar19 = FUN_140030820(uVar19,local_5d28);
          cVar3 = FUN_14000ff10(local_7300,uVar19);
          if ((cVar3 == '\0') &&
             (lVar22 = FUN_140030c60(local_7300), *(longlong *)(lVar22 + 0x20) != 0)) {
            lVar22 = FUN_140030c60(local_7300);
            plVar16 = *(longlong **)(lVar22 + 0x20);
            pcVar1 = *(code **)(*plVar16 + 0x80);
            uVar19 = FUN_140085090(local_2380,local_6030);
            (*pcVar1)(plVar16,uVar19);
            lVar22 = FUN_140030c60(local_7300);
            uVar19 = (**(code **)(**(longlong **)(lVar22 + 0x20) + 0x90))
                               (*(longlong **)(lVar22 + 0x20),local_29b8);
            FUN_140085610(local_5210,uVar19);
            FUN_140085440(local_29b8);
          }
          uVar19 = FUN_140085090(local_2358,local_6030);
          uVar31 = FUN_140017110(local_4e00);
          uVar32 = FUN_140017110(local_5998);
          FUN_140043430(&PTR_s_wallpaperconfig_1404df5a0,uVar32,uVar31,uVar19,local_5210);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3208,"audioprocessing");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6030,&local_7348);
          cVar3 = FUN_1400888b0(uVar19);
          if (cVar3 != '\0') {
            FUN_14006e0c0(&DAT_1404e52e0);
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_31f8,"schemecolor");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6030,&local_7348);
          cVar3 = FUN_1400888b0(uVar19);
          if ((cVar3 != '\0') && ((DAT_1404df540 & 0x10) == 0)) {
            KillTimer(param_1,0x69);
            SetTimer(param_1,0x69,100,(TIMERPROC)0x0);
            DAT_1404df540 = DAT_1404df540 | 0x10;
          }
          FUN_140085440(local_5210);
          thunk_FUN_140017240(local_5998);
          thunk_FUN_140017240(local_4e00);
          puVar17 = local_6030;
        }
        else {
          bVar39 = true;
LAB_140029d24:
          FUN_140084dd0(local_6800,0);
          cVar3 = FUN_140016930(&DAT_1404dfbc0);
          if (cVar3 == '\0') {
            FUN_140017840(&DAT_1404dfbc0,local_6800,0);
          }
          puVar18 = (undefined4 *)FUN_1400170d0(local_3298,"properties");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7088,&local_7348);
          FUN_140088360(uVar19,local_6688);
          lVar22 = FUN_1400190b0(local_6688);
          lVar24 = FUN_140031a50(local_6688);
          for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3288,"properties");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_7088,&local_7348);
            puVar18 = (undefined4 *)FUN_14003aa40(lVar22,local_3278);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(uVar19,&local_7348);
            puVar18 = (undefined4 *)FUN_14003aa40(lVar22,local_3268);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar31 = FUN_140087640(local_6800,&local_7348);
            FUN_140085520(uVar31,uVar19);
          }
          FUN_14000dcc0(local_6688);
          if (!bVar39) {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3258,"properties");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_7088,&local_7348);
            FUN_140085520(uVar19,local_6800);
            FUN_140031fa0(&DAT_1404dfbc0);
            FUN_140031e20(&DAT_1404dfbc0);
            FUN_140085440(local_6800);
            goto LAB_140029f22;
          }
          uVar19 = FUN_140004d00(local_3a98,local_6800,0);
          FUN_14000de40(&DAT_1404dfbc0,uVar19);
          thunk_FUN_140017240(local_3a98);
          puVar17 = local_6800;
        }
        FUN_140085440(puVar17);
LAB_140029ea4:
        FUN_140085440(local_7088);
        thunk_FUN_140017240(local_6af0);
        return 0;
      case 0x6c:
        PostMessageW(param_1,0x111,0x9c53,0);
        return 0;
      case 0x6d:
        FUN_140016fa0(local_61c0);
        thunk_FUN_14000f880(local_61c0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5ea0,0);
        cVar3 = FUN_140017840(local_61c0,local_5ea0,0);
        if (cVar3 != '\0') {
          FUN_1400316b0(local_46f8);
          FUN_140088a90(local_5ea0,local_70d8);
          FUN_140088ad0(local_5ea0,local_6b90);
          cVar3 = FUN_140017580(local_70d8,local_6b90);
          while (cVar3 != '\0') {
            uVar19 = FUN_140017600(local_70d8);
            FUN_140085090(local_51c0,uVar19);
            cVar3 = FUN_140088890(local_51c0);
            if (cVar3 != '\0') {
              uVar19 = FUN_140085cc0(local_51c0,local_3a58);
              FUN_140031430(local_46f8,local_31d8,uVar19);
              thunk_FUN_140017240(local_3a58);
            }
            FUN_140085440(local_51c0);
            FUN_1400175a0(local_70d8);
            cVar3 = FUN_140017580(local_70d8,local_6b90);
          }
          FUN_140084dd0(local_6fc0,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_6fc0);
          cVar3 = FUN_1400888a0(local_6fc0);
          if (cVar3 != '\0') {
            iVar10 = FUN_1400863a0(local_6fc0);
            if (iVar10 != 0) {
              do {
                FUN_14002f7a0(local_4738);
                iVar10 = (int)uVar15;
                uVar19 = thunk_FUN_140086540(local_6fc0,uVar15);
                cVar3 = FUN_14001c9a0(uVar19,local_4738);
                if (cVar3 == '\0') {
LAB_14002a5ac:
                  FUN_140087f40(local_6fc0,uVar15,0);
                  iVar10 = iVar10 + -1;
                }
                else {
                  uVar19 = FUN_1400313b0(local_46f8,local_5d20,local_4738);
                  uVar31 = FUN_140030820(local_46f8,local_5d18);
                  cVar3 = FUN_14000ff10(uVar19,uVar31);
                  if (cVar3 == '\0') goto LAB_14002a5ac;
                }
                FUN_14002f7d0(local_4738);
                uVar15 = (ulonglong)(iVar10 + 1U);
                uVar35 = FUN_1400863a0(local_6fc0);
              } while (iVar10 + 1U < uVar35);
            }
            FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_6fc0);
            FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
            FUN_140019350(0);
          }
          FUN_140085440(local_6fc0);
          FUN_14002f780(local_46f8);
        }
        FUN_140085440(local_5ea0);
        thunk_FUN_140017240(local_61c0);
        return 0;
      case 0x6e:
        PostMessageW(param_1,0x111,0x9c52,0);
        return 0;
      case 0x6f:
        FUN_140016fa0(local_59b8);
        thunk_FUN_14000f880(local_59b8,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6008,0);
        cVar3 = FUN_140017840(local_59b8,local_6008,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888a0(local_6008), cVar3 != '\0')) {
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_6008);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          cVar3 = FUN_1400182c0(&DAT_1404e67a0);
          if (cVar3 != '\0') {
            FUN_140084dd0(local_4f68,0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_31e8,"playlists");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_4f68,&local_7348);
            FUN_140085520(uVar19,local_6008);
            uVar19 = FUN_140004d00(local_3a78,local_4f68,0);
            FUN_140018240(local_4e20,0xce,uVar19);
            thunk_FUN_140017240(local_3a78);
            FUN_1400182d0(&DAT_1404e67a0,local_4e20);
            FUN_1400182b0(local_4e20);
            FUN_140085440(local_4f68);
          }
        }
        FUN_140085440(local_6008);
        thunk_FUN_140017240(local_59b8);
        return 0;
      case 0x70:
        FUN_140016fa0(local_61a0);
        thunk_FUN_14000f880(local_61a0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6968,0);
        cVar3 = FUN_140017840(local_61a0,local_6968,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_6968), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_31c8,"playlist");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6968,&local_7348);
          FUN_140085090(local_4258,uVar19);
          puVar18 = (undefined4 *)FUN_1400170d0(local_31b8,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6968,&local_7348);
          FUN_140085cc0(uVar19,local_4e40);
          uVar19 = FUN_140085090(local_2330,local_4258);
          FUN_140066aa0(&DAT_1404e52e0,local_4e40,uVar19);
          uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2308);
          FUN_140019f60(uVar19);
          thunk_FUN_140017240(local_4e40);
          FUN_140085440(local_4258);
        }
        FUN_140085440(local_6968);
        thunk_FUN_140017240(local_61a0);
        return 0;
      case 0x71:
        FUN_140016fa0(local_5938);
        thunk_FUN_14000f880(local_5938,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_68c8,0);
        cVar3 = FUN_140017840(local_5938,local_68c8,0);
        if (cVar3 == '\0') goto LAB_1400291cb;
        puVar18 = (undefined4 *)FUN_1400170d0(local_33a8,"refresh");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_68c8,&local_7348);
        cVar3 = FUN_1400886d0(uVar19);
        if (cVar3 == '\0') {
LAB_1400290c3:
          bVar39 = false;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3398,"refresh");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_68c8,&local_7348);
          cVar3 = FUN_140086300(uVar19);
          if (cVar3 == '\0') goto LAB_1400290c3;
          bVar39 = true;
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_3388,"refresh");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        FUN_1400878f0(local_68c8,&local_7348);
        FUN_140084dd0(local_6120,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_6120);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3378,"profile");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6120,&local_7348);
        FUN_140085520(uVar19,local_68c8);
        FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_6120);
        if (bVar39) {
          FUN_1400666c0(&DAT_1404e52e0);
        }
        FUN_1400191e0(&DAT_1404e52e0);
        FUN_14006a490(&DAT_1404e52e0,local_6120);
        uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_23a8);
        FUN_140019f60(uVar19);
        FUN_14001cc50(0);
        FUN_140085440(local_6120);
LAB_1400291cb:
        FUN_140085440(local_68c8);
        thunk_FUN_140017240(local_5938);
        return 0;
      case 0x73:
        FUN_140016fa0(local_6180);
        thunk_FUN_14000f880(local_6180,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5dd8,0);
        cVar3 = FUN_140017840(local_6180,local_5dd8,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_5dd8), cVar3 != '\0')) {
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"browser",local_5dd8);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
        }
        FUN_140085440(local_5dd8);
        thunk_FUN_140017240(local_6180);
        return 0;
      case 0x74:
        FUN_140016fa0(local_64a0);
        thunk_FUN_14000f880(local_64a0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6990,0);
        cVar3 = FUN_140017840(local_64a0,local_6990,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_6990), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_31a8,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6990,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3198,"presets");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar31 = FUN_140087640(local_6990,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if ((cVar3 != '\0') && (cVar3 = FUN_1400888a0(uVar31), cVar3 != '\0')) {
            uVar19 = FUN_140085ca0(uVar19);
            FUN_140044c30(&PTR_s_wallpaperconfig_1404df5a0,uVar19,uVar31);
            FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
            FUN_140019350(0);
          }
        }
        FUN_140085440(local_6990);
        thunk_FUN_140017240(local_64a0);
        return 0;
      case 0x75:
        uVar19 = FUN_140017170(local_2528,"-nowallpapers");
        FUN_140031a60(&DAT_1404e8b20,uVar19);
        FUN_140084dd0(local_5198,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_5198);
        FUN_140065110(&DAT_1404e52e0,1);
        FUN_14006a490(&DAT_1404e52e0,local_5198);
        FUN_14001cc50(0);
        FUN_140085440(local_5198);
        return 0;
      case 0x76:
        FUN_140016fa0(local_6480);
        thunk_FUN_14000f880(local_6480,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_69b8,0);
        cVar3 = FUN_140017840(local_6480,local_69b8,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888a0(local_69b8), cVar3 != '\0')) {
          FUN_140084dd0(local_7038,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_7038);
          cVar3 = FUN_1400888a0(local_7038);
          if (cVar3 == '\0') {
            uVar19 = FUN_140084dd0(local_2990,6);
            FUN_140085610(local_7038,uVar19);
            FUN_140085440(local_2990);
          }
          local_71f0 = 0;
          uStack_71e8 = 0;
          FUN_140037450(&local_71f0);
          iVar10 = FUN_1400863a0(local_7038);
          if (iVar10 != 0) {
            do {
              FUN_14002f7a0(local_4878);
              uVar19 = thunk_FUN_140086540(local_7038,uVar15);
              cVar3 = FUN_14001c9a0(uVar19,local_4878);
              if (cVar3 != '\0') {
                uVar19 = FUN_140030b30(&local_71f0,local_4878);
                FUN_14002f800(uVar19,local_4878);
              }
              FUN_14002f7d0(local_4878);
              uVar36 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar36;
              uVar35 = FUN_1400863a0(local_7038);
            } while (uVar36 < uVar35);
          }
          FUN_140088a90(local_69b8,local_7098);
          FUN_140088ad0(local_69b8,local_6b80);
          cVar3 = FUN_140017580(local_7098,local_6b80);
          while (cVar3 != '\0') {
            uVar19 = FUN_140017600(local_7098);
            FUN_140085090(local_5170,uVar19);
            FUN_14002f7a0(local_48b8);
            cVar3 = FUN_14001c9a0(local_5170,local_48b8);
            if (cVar3 != '\0') {
              uVar19 = FUN_140030b30(&local_71f0,local_48b8);
              FUN_14002f800(uVar19,local_48b8);
            }
            FUN_14002f7d0(local_48b8);
            FUN_140085440(local_5170);
            FUN_1400175a0(local_7098);
            cVar3 = FUN_140017580(local_7098,local_6b80);
          }
          FUN_1400864d0(local_7038);
          puVar25 = (undefined8 *)FUN_14000ec50(&local_71f0);
          local_7228 = *(longlong *)*puVar25;
          cVar3 = *(char *)(local_7228 + 0x19);
          while (cVar3 == '\0') {
            lVar22 = local_7228 + 0x60;
            lVar24 = local_7228 + 0x40;
            cVar3 = FUN_140016930(lVar22);
            if (cVar3 == '\0') {
              FUN_140084dd0(local_56e0,0);
              FUN_140084fe0(local_4208,lVar22);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3188,&DAT_1404748b8);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_56e0,&local_7348);
              FUN_140085610(uVar19,local_4208);
              FUN_140085440(local_4208);
              FUN_140084fe0(local_41e0,lVar24);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3178,&DAT_140473b68);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_56e0,&local_7348);
              FUN_140085610(uVar19,local_41e0);
              FUN_140085440(local_41e0);
              FUN_140087650(local_7038);
              puVar17 = local_56e0;
            }
            else {
              FUN_140084fe0(local_4230,lVar24);
              FUN_140087690(local_7038);
              puVar17 = local_4230;
            }
            FUN_140085440(puVar17);
            FUN_1400175a0(&local_7228);
            cVar3 = *(char *)(local_7228 + 0x19);
          }
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_7038);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          thunk_FUN_140030a90(&local_71f0);
          FUN_140085440(local_7038);
        }
        FUN_140085440(local_69b8);
        thunk_FUN_140017240(local_6480);
        return 0;
      case 0x77:
        FUN_140016fa0(local_6440);
        thunk_FUN_14000f880(local_6440,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6d18,0);
        cVar3 = FUN_140017840(local_6440,local_6d18,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_6d18), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3168,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6d18,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3158,"location");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6d18,&local_7348);
            cVar3 = FUN_140088890(uVar19);
            if (cVar3 != '\0') {
              FUN_140070dd0(&DAT_1404e52e0,local_6d18);
            }
          }
        }
        FUN_140085440(local_6d18);
        thunk_FUN_140017240(local_6440);
        return 0;
      case 0x78:
        FUN_140084dd0(local_56b8,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_56b8);
        FUN_140085070(local_41b8,0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3148,"safemode");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_56b8,&local_7348);
        FUN_140085610(uVar19,local_41b8);
        FUN_140085440(local_41b8);
        FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_56b8);
        FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140085440(local_56b8);
        return 0;
      case 0x7a:
        FUN_140016fa0(local_59d8);
        thunk_FUN_14000f880(local_59d8,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5db0,0);
        cVar3 = FUN_140017840(local_59d8,local_5db0,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888a0(local_5db0), cVar3 != '\0')) {
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_5db0);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          cVar3 = FUN_1400182c0(&DAT_1404e67a0);
          if (cVar3 != '\0') {
            FUN_140084dd0(local_5148,0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3138,"profiles");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_5148,&local_7348);
            FUN_140085520(uVar19,local_5db0);
            uVar19 = FUN_140004d00(local_3a38,local_5148,0);
            FUN_140018240(local_4e60,0xce,uVar19);
            thunk_FUN_140017240(local_3a38);
            FUN_1400182d0(&DAT_1404e67a0,local_4e60);
            FUN_1400182b0(local_4e60);
            FUN_140085440(local_5148);
          }
        }
        FUN_140085440(local_5db0);
        thunk_FUN_140017240(local_59d8);
        return 0;
      case 0x7b:
        FUN_140016fa0(local_6420);
        thunk_FUN_14000f880(local_6420,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_69e0,0);
        cVar3 = FUN_140017840(local_6420,local_69e0,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_69e0), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3128,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_69e0,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3118,&DAT_140473b68);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_69e0,&local_7348);
            FUN_140085cc0(uVar19,local_4a20);
            FUN_140084dd0(local_5120,0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3108,"presets");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_5120,&local_7348);
            uVar31 = FUN_140017110(local_4a20);
            FUN_1400448d0(&PTR_s_wallpaperconfig_1404df5a0,uVar31,uVar19);
            uVar19 = FUN_140004d00(local_3a18,local_5120,0);
            FUN_140018240(local_4e80,0x7b,uVar19);
            thunk_FUN_140017240(local_3a18);
            FUN_1400182d0(&DAT_1404e64d0,local_4e80);
            FUN_1400182b0(local_4e80);
            FUN_140085440(local_5120);
            thunk_FUN_140017240(local_4a20);
          }
        }
        FUN_140085440(local_69e0);
        thunk_FUN_140017240(local_6420);
        return 0;
      case 0x7c:
        FUN_140016fa0(local_6c30);
        thunk_FUN_14000f880(local_6c30,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6fe8,0);
        cVar3 = FUN_140017840(local_6c30,local_6fe8,0);
        if ((cVar3 == '\0') || (cVar3 = FUN_1400888b0(local_6fe8), cVar3 == '\0'))
        goto LAB_14002b96c;
        puVar18 = (undefined4 *)FUN_1400170d0(local_30f8,"properties");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6fe8,&local_7348);
        cVar3 = FUN_1400888b0(uVar19);
        if (cVar3 == '\0') goto LAB_14002b96c;
        puVar18 = (undefined4 *)FUN_1400170d0(local_30e8,"properties");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6fe8,&local_7348);
        FUN_140085090(local_6f38,uVar19);
        FUN_140084dd0(local_6710,0);
        FUN_140084dd0(local_71a0,0);
        FUN_14000dd50(local_7280);
        puVar18 = (undefined4 *)FUN_1400170d0(local_30d8,"schemecolor");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        cVar3 = FUN_140088340(local_6f38,&local_7348);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_30c8,"schemecolor");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f38,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_30b8,"schemecolor");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6f38,&local_7348);
            pcVar26 = (char *)FUN_140085ca0(uVar19);
            if (*pcVar26 == '\0') {
              FUN_140032360(local_7280,"schemecolor");
            }
          }
        }
        lVar22 = FUN_1400190b0(local_7280);
        lVar24 = FUN_140031a50(local_7280);
        for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
          FUN_140016fc0(local_49e0,lVar22);
          puVar18 = (undefined4 *)FUN_14003aa40(local_49e0,local_30a8);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          FUN_1400878f0(local_6f38,&local_7348);
          thunk_FUN_140017240(local_49e0);
        }
        cVar3 = FUN_140044160(&PTR_s_wallpaperconfig_1404df5a0,local_6710,local_71a0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3098,&DAT_140474ec0);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6fe8,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
LAB_14002b578:
            bVar39 = true;
          }
          else {
            uVar15 = 8;
            uVar19 = FUN_140085cc0(uVar19,local_39f8);
            cVar3 = FUN_14000d010(uVar19,"selection");
            if (cVar3 != '\0') goto LAB_14002b578;
            bVar39 = false;
          }
          if (uVar15 != 0) {
            thunk_FUN_140017240(local_39f8);
          }
          if (bVar39) {
            puVar18 = (undefined4 *)FUN_1400170d0(local_3088,"monitors");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6fe8,&local_7348);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3078,"wallpapers");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            local_6bc8 = FUN_140087640(local_6fe8,&local_7348);
            local_6be0 = local_6f38;
            local_6bd8 = local_7280;
            local_6bd0 = uVar19;
            FUN_14002e6e0(&local_6be0,local_6710);
            cVar3 = FUN_1400888b0(local_71a0);
            if ((cVar3 != '\0') && (cVar3 = FUN_1400864a0(local_71a0), cVar3 == '\0')) {
              FUN_140088360(local_71a0,local_6670);
              lVar22 = FUN_1400190b0(local_6670);
              lVar24 = FUN_140031a50(local_6670);
              for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
                puVar18 = (undefined4 *)FUN_14003aa40(lVar22,local_3068);
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_71a0,&local_7348);
                FUN_14002e6e0(&local_6be0,uVar19);
              }
              FUN_14000dcc0(local_6670);
            }
          }
          else {
            FUN_140084dd0(local_6cf0,7);
            FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"defaultproperties",local_6cf0);
            uVar19 = FUN_140017fb0(local_2968,local_6cf0,local_6f38);
            FUN_140085610(local_6cf0,uVar19);
            FUN_140085440(local_2968);
            lVar22 = FUN_1400190b0(local_7280);
            lVar24 = FUN_140031a50(local_7280);
            for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
              FUN_140016fc0(local_49c0,lVar22);
              puVar18 = (undefined4 *)FUN_14003aa40(local_49c0,local_3058);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              FUN_1400878f0(local_6cf0,&local_7348);
              thunk_FUN_140017240(local_49c0);
            }
            FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"defaultproperties",local_6cf0);
            FUN_140104b50(local_6cf0);
            local_6ed8 = local_6f38;
            local_6ed0 = local_7280;
            FUN_14002f0b0(&local_6ed8,local_6710);
            cVar3 = FUN_1400888b0(local_71a0);
            if ((cVar3 != '\0') && (cVar3 = FUN_1400864a0(local_71a0), cVar3 == '\0')) {
              FUN_140088360(local_71a0,local_66e8);
              lVar22 = FUN_1400190b0(local_66e8);
              lVar24 = FUN_140031a50(local_66e8);
              for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
                puVar18 = (undefined4 *)FUN_14003aa40(lVar22,local_3048);
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_71a0,&local_7348);
                FUN_14002f0b0(&local_6ed8,uVar19);
              }
              FUN_14000dcc0(local_66e8);
            }
            FUN_140085440(local_6cf0);
          }
          FUN_1400444c0(&PTR_s_wallpaperconfig_1404df5a0,local_6710,local_71a0);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          FUN_140084dd0(local_50f8,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_50f8)
          ;
          FUN_1400666c0(&DAT_1404e52e0);
          FUN_14006a490(&DAT_1404e52e0,local_50f8);
          FUN_14001cc50(0);
          FUN_140085440(local_50f8);
        }
        FUN_14000dcc0(local_7280);
        FUN_140085440(local_71a0);
        FUN_140085440(local_6710);
        FUN_140085440(local_6f38);
LAB_14002b96c:
        FUN_140085440(local_6fe8);
        thunk_FUN_140017240(local_6c30);
        return 0;
      case 0x7d:
        FUN_140016fa0(local_6400);
        thunk_FUN_14000f880(local_6400,*(undefined8 *)(param_4 + 2),param_4[1]);
        cVar3 = FUN_1400182c0(&DAT_1404e6a70);
        if (cVar3 == '\0') {
          uVar19 = FUN_140017110(local_6400);
          FUN_14003aa00(param_1,0x111,0x9c52,uVar19);
          cVar3 = FUN_1400182c0(&DAT_1404e6a70);
          if (cVar3 != '\0') {
            FUN_140084550(&DAT_1404e6a70);
            FUN_140018220(local_49a0,1);
            FUN_1400182d0(&DAT_1404e6a70,local_49a0);
            FUN_1400182b0(local_49a0);
            thunk_FUN_140017240(local_6400);
            return 0;
          }
        }
        else {
          cVar3 = FUN_1400182c0(&DAT_1404e6a70);
          if (cVar3 != '\0') {
            FUN_140018240(local_4960,0x7d,local_6400);
            FUN_1400182d0(&DAT_1404e6a70,local_4960);
            FUN_140084550(&DAT_1404e6a70);
            FUN_140018220(local_4980,1);
            FUN_1400182d0(&DAT_1404e6a70,local_4980);
            FUN_1400182b0(local_4980);
            FUN_1400182b0(local_4960);
          }
        }
        thunk_FUN_140017240(local_6400);
        return 0;
      case 0x80:
        FUN_140016fa0(local_59f8);
        thunk_FUN_14000f880(local_59f8,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6cc8,0);
        cVar3 = FUN_140017840(local_59f8,local_6cc8,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_6cc8), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3038,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6cc8,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3028,"source");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar31 = FUN_140087640(local_6cc8,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3018,"destination");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar32 = FUN_140087640(local_6cc8,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3008,&DAT_140474f0c);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar27 = FUN_140087640(local_6cc8,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            FUN_140085cc0(uVar19,local_4940);
            uVar28 = FUN_140084dd0(local_2940,6);
            FUN_140085610(uVar19,uVar28);
            FUN_140085440(local_2940);
            FUN_140084fe0(local_4190,local_4940);
            FUN_140087690(uVar19,local_4190);
            FUN_140085440(local_4190);
            thunk_FUN_140017240(local_4940);
          }
          cVar3 = FUN_1400888a0(uVar19);
          if (((cVar3 != '\0') && (cVar3 = FUN_140088890(uVar31), cVar3 != '\0')) &&
             (cVar3 = FUN_140088890(uVar32), cVar3 != '\0')) {
            cVar3 = FUN_1400886d0(uVar27);
            if ((cVar3 != '\0') && (cVar3 = FUN_140086300(uVar27), uVar15 = 0, cVar3 != '\0')) {
              uVar15 = 1;
            }
            local_7335 = (byte)uVar15;
            FUN_140088a90(uVar19,local_70a8);
            FUN_140088ad0(uVar19,local_6c10);
            cVar3 = FUN_140017580(local_70a8,local_6c10);
            while (cVar3 != '\0') {
              uVar19 = FUN_140017600(local_70a8);
              FUN_140084dd0(local_50a8,0);
              FUN_140084dd0(local_50d0,0);
              uVar27 = FUN_140085ca0(uVar19);
              uVar28 = FUN_140085ca0(uVar31);
              cVar3 = FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,uVar28,uVar27,local_50a8);
              if ((char)uVar15 == '\0') {
LAB_14002bd94:
                bVar39 = false;
              }
              else {
                uVar27 = FUN_140085ca0(uVar19);
                uVar28 = FUN_140085ca0(uVar32);
                cVar6 = FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,uVar28,uVar27,local_50d0);
                if (cVar6 == '\0') goto LAB_14002bd94;
                bVar39 = true;
              }
              if (cVar3 != '\0') {
                uVar27 = FUN_140084dd0(local_2918,0);
                uVar28 = FUN_140085090(local_22e0,local_50a8);
                uVar29 = FUN_140085ca0(uVar19);
                uVar30 = FUN_140085ca0(uVar32);
                FUN_140043430(&PTR_s_wallpaperconfig_1404df5a0,uVar30,uVar29,uVar28,uVar27);
                FUN_140085440(local_2918);
              }
              if (bVar39) {
                uVar27 = FUN_140084dd0(local_28f0,0);
                uVar28 = FUN_140085090(local_22b8,local_50d0);
                uVar19 = FUN_140085ca0(uVar19);
                uVar29 = FUN_140085ca0(uVar31);
                FUN_140043430(&PTR_s_wallpaperconfig_1404df5a0,uVar29,uVar19,uVar28,uVar27);
                FUN_140085440(local_28f0);
              }
              FUN_140085440(local_50d0);
              FUN_140085440(local_50a8);
              FUN_1400175a0(local_70a8);
              cVar3 = FUN_140017580(local_70a8);
              uVar15 = (ulonglong)local_7335;
            }
          }
        }
        FUN_140085440(local_6cc8);
        thunk_FUN_140017240(local_59f8);
        return 0;
      case 0x81:
        FUN_140016fa0(local_63e0);
        thunk_FUN_14000f880(local_63e0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_5d88,0);
        cVar3 = FUN_140017840(local_63e0,local_5d88,0);
        if ((cVar3 == '\0') || (cVar3 = FUN_1400888b0(local_5d88), cVar3 == '\0'))
        goto LAB_14002c00c;
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ff8,"group");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5d88,&local_7348);
        cVar3 = FUN_140088890(uVar19);
        if (cVar3 == '\0') {
LAB_14002bf8a:
          bVar39 = false;
        }
        else {
          uVar15 = 0x10;
          uVar19 = FUN_140085cc0(uVar19,local_39d8);
          cVar3 = FUN_14000d010(uVar19,"screensaver");
          if (cVar3 == '\0') goto LAB_14002bf8a;
          bVar39 = true;
        }
        if (uVar15 != 0) {
          thunk_FUN_140017240(local_39d8);
        }
        if (bVar39) {
          PTR_s_wallpaperconfig_1404df5a0 = s_wallpaperconfigscreensaver_1404745f8;
        }
        else {
          FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
        }
        FUN_140084dd0(local_5080,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_5080);
        FUN_14006a490(&DAT_1404e52e0,local_5080);
        FUN_14001cc50(0);
        FUN_140085440(local_5080);
LAB_14002c00c:
        FUN_140085440(local_5d88);
        thunk_FUN_140017240(local_63e0);
        return 0;
      case 0x82:
        FUN_140016fa0(local_5a18);
        thunk_FUN_14000f880(local_5a18,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_60a8,0);
        cVar3 = FUN_140017840(local_5a18,local_60a8,0);
        if ((cVar3 == '\0') || (cVar3 = FUN_1400888b0(local_60a8), cVar3 == '\0'))
        goto LAB_14002c209;
        puVar18 = (undefined4 *)FUN_1400170d0(local_2fe8,"group");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_60a8,&local_7348);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2fd8,"options");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar31 = FUN_140087640(local_60a8,&local_7348);
        cVar3 = FUN_1400888b0(uVar31);
        if (cVar3 == '\0') {
LAB_14002c120:
          bVar39 = false;
        }
        else {
          uVar15 = 0x20;
          uVar19 = FUN_140085cc0(uVar19,local_39b8);
          cVar3 = FUN_14000d010(uVar19,"screensaver");
          if (cVar3 == '\0') goto LAB_14002c120;
          bVar39 = true;
        }
        if (uVar15 != 0) {
          thunk_FUN_140017240(local_39b8);
        }
        if (bVar39) {
          FUN_140084dd0(local_6c78,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver",local_6c78);
          cVar3 = FUN_1400888b0(local_6c78);
          if (cVar3 == '\0') {
            uVar19 = FUN_140084dd0(local_28c8,7);
            FUN_140085610(local_6c78,uVar19);
            FUN_140085440(local_28c8);
          }
          uVar19 = FUN_140017fb0(local_28a0,local_6c78,uVar31);
          FUN_140085610(local_6c78,uVar19);
          FUN_140085440(local_28a0);
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver",local_6c78);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(1);
          FUN_140085440(local_6c78);
        }
LAB_14002c209:
        FUN_140085440(local_60a8);
        thunk_FUN_140017240(local_5a18);
        return 0;
      case 0x85:
        FUN_140016fa0(local_63c0);
        thunk_FUN_14000f880(local_63c0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6e68,0);
        cVar3 = FUN_140017840(local_63c0,local_6e68,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888b0(local_6e68), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2fc8,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6e68,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            FUN_140085cc0(uVar19,local_6e40);
            FUN_14000dd50(local_6ec8);
            FUN_1400802c0(local_2508);
            uVar19 = FUN_140017100(local_6e40);
            uVar31 = FUN_140017110(local_6e40);
            FUN_1400810f0(local_2508,uVar31,uVar19);
            uVar19 = FUN_1400811d0(local_2508,local_3998);
            FUN_140030470(local_6ec8,uVar19);
            thunk_FUN_140017240(local_3998);
            uVar19 = FUN_140019200(&DAT_1404e52e0);
            FUN_140030ee0(uVar19,local_72f8);
            FUN_140030820(uVar19,local_7220);
            cVar3 = FUN_14000ff10(local_72f8,local_7220);
            while (cVar3 == '\0') {
              uVar19 = FUN_140030c60(local_72f8);
              FUN_14002f860(local_16f8,uVar19);
              FUN_140016fc0(local_5a38,local_16f8);
              FUN_1400802c0(local_2738);
              uVar19 = FUN_140017100(local_6e40);
              uVar31 = FUN_140017110(local_6e40);
              FUN_1400810f0(local_2738,uVar31,uVar19);
              uVar19 = FUN_140017100(local_5a38);
              uVar31 = FUN_140017110(local_5a38);
              FUN_1400810f0(local_2738,uVar31,uVar19);
              uVar19 = FUN_1400811d0(local_2738,local_3978);
              FUN_140030470(local_6ec8,uVar19);
              thunk_FUN_140017240(local_3978);
              thunk_FUN_140017240(local_5a38);
              FUN_14002f920(local_16f8);
              FUN_140030dd0(local_72f8);
              cVar3 = FUN_14000ff10(local_72f8,local_7220);
            }
            uVar19 = FUN_1400191f0(&DAT_1404e52e0);
            FUN_140030ee0(uVar19,local_72f0);
            FUN_140030820(uVar19,local_7218);
            bVar39 = false;
            cVar3 = FUN_14000ff10(local_72f0,local_7218);
            bVar38 = false;
            if (cVar3 == '\0') {
              do {
                bVar39 = bVar38;
                lVar22 = FUN_140030c60(local_72f0);
                if (*(longlong *)(lVar22 + 0x20) != 0) {
                  uVar19 = FUN_1400190a0();
                  cVar3 = FUN_14000d0f0(uVar19,local_6e40);
                  if ((cVar3 != '\0') &&
                     (iVar10 = (**(code **)(**(longlong **)(lVar22 + 0x20) + 0x20))(), iVar10 == 1))
                  {
                    lVar22 = *(longlong *)(lVar22 + 0x20);
                    BVar7 = IsWindow(*(HWND *)(lVar22 + 0x1c8));
                    if ((BVar7 != 0) &&
                       (lVar22 = FUN_14003aa00(*(undefined8 *)(lVar22 + 0x1c8),0x46c,0,0),
                       lVar22 != 0)) {
                      bVar39 = true;
                    }
                  }
                }
                FUN_140030dd0(local_72f0);
                cVar3 = FUN_14000ff10(local_72f0,local_7218);
                bVar38 = bVar39;
              } while (cVar3 == '\0');
              if (bVar39) {
                FUN_1400666c0(&DAT_1404e52e0);
              }
            }
            local_71f8 = 0;
            local_7208 = 0;
            lStack_7200 = 0;
            FUN_14000ec50(&local_7208);
            lVar22 = FUN_1400190b0(local_6ec8);
            lVar24 = FUN_140031a50(local_6ec8);
            for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
              FUN_140016fc0(local_4a00,lVar22);
              uVar19 = FUN_140005ee0(local_3938);
              uVar19 = FUN_140005d20(uVar19,"bin/scenestorage");
              uVar31 = FUN_14003a8b0(local_3958,local_4a00,&DAT_140474f34);
              uVar19 = FUN_140018c60(uVar19,uVar31);
              FUN_140005c50(local_5a58,uVar19);
              thunk_FUN_140017240(local_3958);
              thunk_FUN_140016770(local_3938);
              cVar3 = FUN_140018f30(local_5a58);
              if (cVar3 != '\0') {
                FUN_1400323c0(&local_7208,local_5a58);
              }
              thunk_FUN_140016770(local_5a58);
              thunk_FUN_140017240(local_4a00);
            }
            if ((bVar39) || (local_7208 != lStack_7200)) {
              FUN_1400191e0(&DAT_1404e52e0);
              FUN_1400666c0(&DAT_1404e52e0);
              lVar24 = lStack_7200;
              for (lVar22 = local_7208; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
                FUN_140016600(local_4920,lVar22);
                FUN_140019000(local_4920);
                FUN_140016770(local_4920);
              }
              FUN_14001b080();
            }
            FUN_140033540(&local_7208);
            FUN_14000dcc0(local_6ec8);
            FUN_140017240(local_6e40);
            FUN_140086d30(local_6e68);
            local_6e68[0] = 0;
            if (local_6e58[0] != 0) {
              FUN_140089280(local_6e58);
            }
            FUN_140017240(local_63c0);
            return 0;
          }
        }
        FUN_140085440(local_6e68);
        thunk_FUN_140017240(local_63c0);
        return 0;
      case 0xc9:
        FUN_140016fa0(local_63a0);
        thunk_FUN_14000f880(local_63a0,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6a08,0);
        cVar3 = FUN_140017840(local_63a0,local_6a08,0);
        if (cVar3 != '\0') {
          FUN_140046f20(local_6a08);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2fb8,"usermonitors");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          FUN_1400878f0(local_6a08,&local_7348);
          FUN_14001b3a0(&DAT_1404e52e0,local_6a08,1);
        }
        FUN_140085440(local_6a08);
        thunk_FUN_140017240(local_63a0);
        return 0;
      case 0xca:
        FUN_1400846c0(&DAT_1404e67a0);
        FUN_140031fa0(&DAT_1404df570);
        FUN_140031e20(&DAT_1404df570);
        FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140019350(0);
        return 0;
      case 0xcb:
        FUN_140016fa0(local_6380);
        thunk_FUN_14000f880(local_6380,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6a30,0);
        cVar3 = FUN_140017840(local_6380,local_6a30,0);
        if (cVar3 != '\0') {
          FUN_140084dd0(local_7060,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_7060);
          uVar19 = FUN_140017fb0(local_2878,local_7060,local_6a30);
          FUN_140085610(local_7060,uVar19);
          FUN_140085440(local_2878);
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_7060);
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(0);
          uVar19 = FUN_140017fb0(local_2850,local_7060,local_6a30);
          FUN_140085610(local_7060,uVar19);
          FUN_140085440(local_2850);
          cVar3 = FUN_140017840(&DAT_1404df570,local_7060,0);
          if (cVar3 != '\0') {
            uVar19 = FUN_140017fb0(local_2828,local_7060,local_6a30);
            FUN_140085610(local_7060,uVar19);
            FUN_140085440(local_2828);
            uVar19 = FUN_140004d00(local_3918,local_7060,0);
            FUN_14000de40(&DAT_1404df570,uVar19);
            thunk_FUN_140017240(local_3918);
          }
          FUN_140085440(local_7060);
        }
        FUN_140085440(local_6a30);
        thunk_FUN_140017240(local_6380);
        return 0;
      case 0xcc:
      case 0xcd:
        uVar19 = FUN_140005ee0(local_38f8);
        uVar19 = FUN_140005d20(uVar19,&DAT_140473850);
        FUN_140005c50(local_6300,uVar19);
        thunk_FUN_140016770(local_38f8);
        FUN_140016fa0(local_6320);
        thunk_FUN_14000f880(local_6320,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6ca0,0);
        cVar3 = FUN_140016930(local_6320);
        if ((cVar3 == '\0') && (cVar3 = FUN_140017840(local_6320,local_6ca0,0), cVar3 != '\0')) {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2f38,"utilityDirectory");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6ca0,&local_7348);
          FUN_140085090(local_5058,uVar19);
          cVar3 = FUN_140088890(local_5058);
          if (cVar3 != '\0') {
            uVar19 = FUN_140085cc0(local_5058,local_38d8);
            FUN_140018bc0(local_6300,uVar19);
            thunk_FUN_140017240(local_38d8);
          }
          FUN_140085440(local_5058);
        }
        FUN_14000dd70(local_4f20,L"apputil32.exe");
        uVar19 = FUN_140005c50(local_38b8,local_6300);
        uVar19 = FUN_140018c30(uVar19,local_4f20);
        FUN_140005c50(local_5a78,uVar19);
        thunk_FUN_140016770(local_38b8);
        cVar3 = FUN_140018f30(local_5a78);
        if (cVar3 == '\0') goto LAB_14002d225;
        FUN_1400846c0(&DAT_1404e67a0);
        DVar12 = GetCurrentProcessId();
        FUN_14000df80(local_1da8,1);
        uVar19 = FUN_14000d140(local_1d98,"-restartapplocal -process ");
        FUN_14000e8f0(uVar19,DVar12);
        if (*param_4 == 0xcc) {
          FUN_140041a60();
          FUN_1400666c0(&DAT_1404e52e0);
          uVar19 = FUN_140005ee0(local_3898);
          uVar19 = FUN_140005d20(uVar19,&DAT_140473850);
          uVar19 = FUN_140005d20(uVar19,"scenestorage");
          FUN_140005c50(local_6340,uVar19);
          thunk_FUN_140016770(local_3898);
          cVar3 = FUN_140018e60(local_6340);
          if (cVar3 != '\0') {
            FUN_140015380(local_6c40);
            FUN_140018ba0(local_6340,local_4f40);
            FUN_14003ad00(local_4f40,local_6c40);
            thunk_FUN_140016770(local_4f40);
            FUN_140015df0(local_6c40);
            FUN_140019000(local_6340);
          }
          thunk_FUN_140016770(local_6340);
        }
        else {
          FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
          FUN_140019350(1);
          cVar3 = FUN_1400888b0(local_6ca0);
          if (cVar3 != '\0') {
            puVar18 = (undefined4 *)FUN_1400170d0(local_2f28,"browsewallpapers");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            cVar3 = FUN_140088340(local_6ca0,&local_7348);
            if (cVar3 != '\0') {
              puVar18 = (undefined4 *)FUN_1400170d0(local_2f18,"browsewallpapers");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6ca0,&local_7348);
              cVar3 = FUN_1400886d0(uVar19);
              if (cVar3 != '\0') {
                puVar18 = (undefined4 *)FUN_1400170d0(local_2f08,"browsewallpapers");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_6ca0,&local_7348);
                cVar3 = FUN_140086300(uVar19);
                if (cVar3 == '\0') goto LAB_14002d193;
              }
            }
          }
          FUN_14000d140(local_1d98," -showbrowse");
        }
LAB_14002d193:
        PostMessageW(param_1,0x10,0,0);
        FUN_14000d140(local_1d98," -x64");
        pWVar13 = (LPCWSTR)FUN_140005c70(local_6300);
        uVar19 = FUN_14000dee0(local_1da8,local_3878);
        pWVar14 = (LPCWSTR)FUN_140005c70(uVar19);
        lpFile = (LPCWSTR)FUN_140005c70(local_5a78);
        ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,pWVar14,pWVar13,1);
        thunk_FUN_140016770(local_3878);
        FUN_140005b50(local_1da8);
LAB_14002d225:
        thunk_FUN_140016770(local_5a78);
        thunk_FUN_140016770(local_4f20);
        FUN_140085440(local_6ca0);
        thunk_FUN_140017240(local_6320);
        thunk_FUN_140016770(local_6300);
        return 0;
      case 0xcf:
        FUN_140016fa0(local_6360);
        thunk_FUN_14000f880(local_6360,*(undefined8 *)(param_4 + 2),param_4[1]);
        FUN_140084dd0(local_6a58,0);
        cVar3 = FUN_140017840(local_6360,local_6a58,0);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400888a0(local_6a58), cVar3 != '\0')) {
          uVar19 = FUN_14012e6e0();
          FUN_140085090(local_5690,uVar19);
          FUN_140088a90(local_6a58,local_70b8);
          FUN_140088ad0(local_6a58,local_6c50);
          cVar3 = FUN_140017580(local_70b8,local_6c50);
          if (cVar3 != '\0') {
            do {
              uVar19 = FUN_140017600(local_70b8);
              cVar3 = FUN_1400888b0(uVar19);
              if (cVar3 != '\0') {
                puVar18 = (undefined4 *)FUN_1400170d0(local_2fa8,"location");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar31 = FUN_140087640(uVar19,&local_7348);
                puVar18 = (undefined4 *)FUN_1400170d0(local_2f98,"device");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(uVar19,&local_7348);
                cVar3 = FUN_140088880(uVar31);
                if ((cVar3 != '\0') && (cVar3 = FUN_140088890(uVar19), cVar3 != '\0')) {
                  FUN_140085cc0(uVar19,local_6e00);
                  puVar18 = (undefined4 *)FUN_14003aa40(local_6e00,local_2f88);
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  cVar3 = FUN_140088340(local_5690,&local_7348);
                  if (cVar3 != '\0') {
                    puVar18 = (undefined4 *)FUN_14003aa40(local_6e00,local_2f78);
                    local_7348 = *puVar18;
                    uStack_7344 = puVar18[1];
                    uStack_7340 = puVar18[2];
                    uStack_733c = puVar18[3];
                    uVar19 = FUN_140087640(local_5690,&local_7348);
                    cVar3 = FUN_1400888b0(uVar19);
                    if ((cVar3 != '\0') && (iVar10 = FUN_140085ee0(uVar31), -1 < iVar10)) {
                      puVar18 = (undefined4 *)FUN_1400170d0(local_2f68,"location");
                      local_7348 = *puVar18;
                      uStack_7344 = puVar18[1];
                      uStack_7340 = puVar18[2];
                      uStack_733c = puVar18[3];
                      uVar31 = FUN_140087640(uVar19,&local_7348);
                      cVar3 = FUN_140088880(uVar31);
                      if (cVar3 != '\0') {
                        puVar18 = (undefined4 *)FUN_1400170d0(local_2f58,"location");
                        local_7348 = *puVar18;
                        uStack_7344 = puVar18[1];
                        uStack_7340 = puVar18[2];
                        uStack_733c = puVar18[3];
                        uVar31 = FUN_140087640(uVar19,&local_7348);
                        iVar11 = FUN_140085ee0(uVar31);
                        if (iVar11 == iVar10) goto LAB_14002ccbc;
                      }
                      FUN_140084ef0(local_4168,iVar10);
                      puVar18 = (undefined4 *)FUN_1400170d0(local_2f48,"location");
                      local_7348 = *puVar18;
                      uStack_7344 = puVar18[1];
                      uStack_7340 = puVar18[2];
                      uStack_733c = puVar18[3];
                      uVar19 = FUN_140087640(uVar19,&local_7348);
                      FUN_140085610(uVar19,local_4168);
                      FUN_140085440(local_4168);
                      uVar15 = 1;
                    }
                  }
LAB_14002ccbc:
                  thunk_FUN_140017240(local_6e00);
                }
              }
              FUN_1400175a0(local_70b8);
              cVar3 = FUN_140017580(local_70b8,local_6c50);
            } while (cVar3 != '\0');
            if ((char)uVar15 != '\0') {
              FUN_14012e560();
              FUN_140085520(&DAT_1404e7ef8,local_5690);
              FUN_14001d0d0();
              FUN_14001d160();
            }
          }
          FUN_140085440(local_5690);
        }
        FUN_140085440(local_6a58);
        thunk_FUN_140017240(local_6360);
        return 0;
      case 0xd0:
        uVar19 = FUN_1400191f0(&DAT_1404e52e0);
        FUN_140030ee0(uVar19,local_72e8);
        FUN_140030820(uVar19,local_7210);
        cVar3 = FUN_14000ff10(local_72e8,local_7210);
        while( true ) {
          if (cVar3 != '\0') {
            FUN_140017170(local_4900,"error");
            FUN_140018240(local_48e0,0xd1,local_4900);
            thunk_FUN_140017240(local_4900);
            FUN_1400182d0(&DAT_1404e67a0,local_48e0);
            FUN_1400182b0(local_48e0);
            return 0;
          }
          lVar22 = FUN_140030c60(local_72e8);
          if ((*(longlong **)(lVar22 + 0x20) != (longlong *)0x0) &&
             (iVar10 = (**(code **)(**(longlong **)(lVar22 + 0x20) + 0x20))(), iVar10 == 2)) break;
          FUN_140030dd0(local_72e8);
          cVar3 = FUN_14000ff10(local_72e8,local_7210);
        }
        FUN_14011a0f0(*(undefined8 *)(lVar22 + 0x20));
        return 0;
      }
      goto switchD_140021f8c_caseD_1;
    }
    switch(param_2) {
    case 0x402:
      FUN_140084dd0(local_5668,0);
      cVar3 = FUN_140016930(&DAT_1404df570);
      if ((cVar3 == '\0') && (cVar3 = FUN_140017840(&DAT_1404df570,local_5668,0), cVar3 != '\0')) {
        puVar18 = (undefined4 *)FUN_1400170d0(local_2e38,&DAT_1404737fc);
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5668,&local_7348);
        FUN_140085070(local_40f0,1);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2e28,"konami");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar31 = FUN_140087640(uVar19,&local_7348);
        FUN_140085610(uVar31,local_40f0);
        FUN_140085440(local_40f0);
        FUN_140084f50(local_40c8,"space");
        puVar18 = (undefined4 *)FUN_1400170d0(local_2e18,"uiskin");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(uVar19,&local_7348);
        FUN_140085610(uVar19,local_40c8);
        FUN_140085440(local_40c8);
        uVar19 = FUN_140004d00(local_3838,local_5668,0);
        FUN_14000de40(&DAT_1404df570,uVar19);
        thunk_FUN_140017240(local_3838);
      }
      FUN_140084dd0(local_6080,0);
      FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_6080);
      FUN_140085070(local_40a0,1);
      puVar18 = (undefined4 *)FUN_1400170d0(local_2e08,"konami");
      local_7348 = *puVar18;
      uStack_7344 = puVar18[1];
      uStack_7340 = puVar18[2];
      uStack_733c = puVar18[3];
      uVar19 = FUN_140087640(local_6080,&local_7348);
      FUN_140085610(uVar19,local_40a0);
      FUN_140085440(local_40a0);
      FUN_140084f50(local_4078,"space");
      puVar18 = (undefined4 *)FUN_1400170d0(local_2df8,"uiskin");
      local_7348 = *puVar18;
      uStack_7344 = puVar18[1];
      uStack_7340 = puVar18[2];
      uStack_733c = puVar18[3];
      uVar19 = FUN_140087640(local_6080,&local_7348);
      FUN_140085610(uVar19,local_4078);
      FUN_140085440(local_4078);
      FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_6080);
      FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
      FUN_140019350(0);
      FUN_140085440(local_6080);
      FUN_140085440(local_5668);
      return 0;
    case 0x406:
      local_7329 = param_3 == 1;
      FUN_14001dee0(&local_7329);
    default:
switchD_140021f8c_caseD_3:
      uVar15 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
      return uVar15;
    case 0x407:
      uVar9 = 1;
      FUN_14000df80(local_26c8,1);
      uVar37 = 3;
      FUN_1404217a0(&local_12e8,0,0x3d0);
      uVar35 = uVar35 & 0xffff;
      if ((param_3 & 0xffff) == 0) {
        uVar19 = FUN_140097640(&DAT_1404e6d80,local_3798,"core_balloon_info");
        FUN_14000d440(local_26b8,uVar19);
        thunk_FUN_140016770(local_3798);
      }
      else {
        uVar9 = uVar37;
        if (uVar35 == 2) {
          local_5a98 = 0;
          uStack_5a90 = 0;
          local_5a88 = 0;
          uStack_5a80 = 0;
          FUN_1400306e0(&local_5a98,&DAT_14047504c,(ulonglong)param_4 & 0xffffffff);
          FUN_140097640(&DAT_1404e6d80,local_62a0,"core_balloon_video_error");
          FUN_14000df80(local_1ca8,1);
          FUN_14000d140(local_1c98,&local_5a98);
          FUN_140016730(local_5b00);
          cVar3 = FUN_140014fa0((ulonglong)param_4 & 0xffffffff,local_5b00);
          if (cVar3 != '\0') {
            uVar19 = FUN_14000d140(local_1c98,&DAT_140473ef8);
            uVar19 = FUN_14000d440(uVar19,local_5b00);
            FUN_14000d140(uVar19,&DAT_140474e94);
          }
          lVar22 = FUN_14000dee0(local_1ca8,local_37b8);
          FUN_14000dd70(local_5ae0,L"{{err}}");
          lVar24 = FUN_140031c90(local_62a0,local_5ae0,0);
          if (lVar24 != -1) {
            uVar19 = *(undefined8 *)(lVar22 + 0x10);
            uVar31 = FUN_140005c70(lVar22);
            FUN_140033110(local_62a0,lVar24,local_5ad0,uVar31,uVar19);
          }
          thunk_FUN_140016770(local_5ae0);
          thunk_FUN_140016770(local_37b8);
          FUN_14000d440(local_26b8,local_62a0);
          DAT_1404e8248 = 1;
          thunk_FUN_140016770(local_5b00);
          FUN_140005b50(local_1ca8);
          thunk_FUN_140016770(local_62a0);
        }
        else if (uVar35 == 3) {
          uVar19 = FUN_140097640(&DAT_1404e6d80,local_37d8,"core_balloon_app_error");
          FUN_14000d440(local_26b8,uVar19);
          thunk_FUN_140016770(local_37d8);
        }
        else if (uVar35 == 4) {
          uVar19 = FUN_140097640(&DAT_1404e6d80,local_37f8,"core_balloon_pkg_version_error");
          FUN_14000d440(local_26b8,uVar19);
          thunk_FUN_140016770(local_37f8);
        }
        else if (uVar35 == 5) {
          uVar19 = FUN_140097640(&DAT_1404e6d80,local_3818,"core_balloon_wallpaper_file_missing");
          FUN_14000d440(local_26b8,uVar19);
          thunk_FUN_140016770(local_3818);
        }
      }
      local_12e8.hWnd = DAT_1404e5278;
      local_fb8 = 4;
      local_12e8.uID = 1000;
      local_12e8.cbSize = 0x3d0;
      local_12e8.uFlags = 0x10;
      uVar19 = FUN_14000dee0(local_26c8,local_3778);
      uVar19 = FUN_140005c70(uVar19);
      FUN_140030740(local_11b8,uVar19);
      thunk_FUN_140016770(local_3778);
      local_f34 = uVar9;
      Shell_NotifyIconW(1,&local_12e8);
      FUN_140005b50(local_26c8);
      return 0;
    case 0x408:
      if ((DAT_1404df540 & 0x200) == 0) {
        FUN_140021dd0(&local_732b);
        if (param_3 != 1) {
          if ((DAT_1404df540 & 0x40) != 0) {
            DAT_1404df540 = DAT_1404df540 & 0xffffffbf;
            FUN_14006eaf0(&DAT_1404e52e0,0);
            PostMessageW(param_1,0x409,0,0);
            FUN_140021e00(&local_732b);
            return 0;
          }
          FUN_14001d320(param_1,5000);
        }
        puVar17 = &local_732b;
        goto LAB_14002dd54;
      }
      if ((DAT_1404dfbb7 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb7 = '\0';
      param_2 = 0x408;
      break;
    case 0x409:
      goto switchD_14002d939_caseD_409;
    case 0x40a:
      if ((DAT_1404df540 & 0x204) != 0) {
        if ((DAT_1404dfbb8 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
          DebugBreak();
        }
        DAT_1404dfbb8 = 0;
        FUN_140098760("Windows reentrancy during WM_USER_VIDEO_ENDED prevented.\n");
        return 0;
      }
      FUN_140021dd0(&local_7334);
      cVar3 = FUN_140067720(&DAT_1404e52e0,param_3 & 0xffffffff);
      puVar17 = &local_7334;
      if (cVar3 != '\0') {
        FUN_140021e00(puVar17);
        return 1;
      }
LAB_14002dd54:
      FUN_140021e00(puVar17);
      return 0;
    case 0x40f:
      if ((DAT_1404df540 & 0x200) == 0) {
        FUN_140021dd0(local_7328);
        FUN_140071dd0(&DAT_1404e52e0);
        FUN_14001cc50(0);
        cVar3 = FUN_1400182c0(&DAT_1404e67a0);
        if (cVar3 != '\0') {
          FUN_140084dd0(local_4f90,7);
          FUN_140084dd0(local_4fb8,6);
          uVar19 = FUN_140019210(&DAT_1404e52e0);
          FUN_140056220(uVar19,local_4fb8);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2dd8,"discoveredplugins");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_4f90,&local_7348);
          FUN_140085520(uVar19,local_4fb8);
          uVar19 = FUN_140004d00(local_3758,local_4f90,0);
          FUN_140018240(local_4ea0,0xce,uVar19);
          thunk_FUN_140017240(local_3758);
          FUN_1400182d0(&DAT_1404e67a0,local_4ea0);
          FUN_1400182b0(local_4ea0);
          FUN_140085440(local_4fb8);
          FUN_140085440(local_4f90);
        }
        FUN_140021e00(local_7328);
        return 0;
      }
      if ((DAT_1404dfbb5 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb5 = '\0';
      break;
    case 0x411:
      cVar3 = FUN_14001e1a0();
      if (cVar3 == '\0') {
LAB_14002424e:
        KillTimer(param_1,0x70);
        UVar33 = 1000;
LAB_14002d965:
        SetTimer(param_1,0x70,UVar33,(TIMERPROC)0x0);
        return 0;
      }
      if (param_3 == 0) {
        KillTimer(param_1,0x70);
        UVar33 = 3000;
        goto LAB_14002d965;
      }
      goto switchD_140021f8c_caseD_1;
    case 0x412:
      if ((DAT_1404df540 & 0x200) == 0) {
        FUN_140021dd0(&local_732a);
        FUN_140007730();
        FUN_140084dd0(local_5640,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver",local_5640);
        cVar3 = FUN_1400888b0(local_5640);
        if (cVar3 != '\0') {
          PTR_s_wallpaperconfig_1404df5a0 = s_wallpaperconfigscreensaver_1404745f8;
          puVar18 = (undefined4 *)FUN_1400170d0(local_2de8,"sameaswallpaper");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5640,&local_7348);
          cVar3 = FUN_1400886d0(uVar19);
          if ((cVar3 != '\0') && (cVar3 = FUN_140086300(uVar19), cVar3 != '\0')) {
            FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
          }
        }
        FUN_140084dd0(local_4fe0,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_4fe0);
        FUN_14006a490(&DAT_1404e52e0,local_4fe0);
        FUN_140085440(local_4fe0);
        FUN_140085440(local_5640);
        FUN_140021e00(&local_732a);
        return 0;
      }
      if ((DAT_1404dfbb6 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb6 = '\0';
      param_2 = 0x412;
      break;
    case 0x415:
      if ((DAT_1404df540 & 0x200) == 0) {
        FUN_140084700(&DAT_1404e64d0);
        FUN_140084700(&DAT_1404e67a0);
        FUN_140084700(&DAT_1404e6a70);
        return 0;
      }
      if ((DAT_1404dfbe0 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe0 = '\0';
    }
LAB_140021ee4:
    PostMessageW(param_1,param_2,param_3,(LPARAM)param_4);
    goto switchD_140021f8c_caseD_1;
  }
  if (param_2 == 0x2e0) {
switchD_14002d939_caseD_409:
    FUN_14001d360();
    return 0;
  }
  if (param_2 < 0x4b) {
    if (param_2 != 0x4a) {
      switch(param_2) {
      case 1:
        break;
      case 2:
        if ((DAT_1404df540 & 8) == 0) {
          PostQuitMessage(0);
          return 0;
        }
        break;
      default:
        goto switchD_140021f8c_caseD_3;
      case 0x11:
      case 0x16:
        if (((param_2 == 0x11) || (param_3 == 1)) &&
           (LVar8 = RegOpenKeyW((HKEY)0xffffffff80000001,L"Software\\WallpaperEngine\\",&local_7268)
           , LVar8 == 0)) {
          local_72b0[0] = '\0';
          local_72b0[1] = '\0';
          local_72b0[2] = '\0';
          local_72b0[3] = '\0';
          RegSetValueExW(local_7268,L"faultyShutdown",0,4,local_72b0,4);
          RegCloseKey(local_7268);
        }
        goto switchD_140021f8c_caseD_3;
      case 0x18:
        if (param_3 != 0) {
          KillTimer(param_1,0x71);
          SetTimer(param_1,0x71,100,(TIMERPROC)0x0);
          return 0;
        }
        break;
      case 0x1a:
        if (param_3 != 0) {
          if ((DAT_1404df540 & 0x200) == 0) {
            FUN_140021dd0(&local_7333);
            if (param_3 == 0x2f) {
              PostMessageW(param_1,0x409,0,0);
            }
            else if ((param_3 == 0x43) && (DAT_1404e7e89 != '\x02')) {
              uStack_70f0 = 0;
              local_70f8 = 0x10;
              BVar7 = SystemParametersInfoW(0x42,0x10,&local_70f8,0);
              if (BVar7 == 1) {
                if ((local_70f8 & 0x100000000) != 0) {
                  iVar10 = FUN_1402c12c0(L"High Contrast White",uStack_70f0);
                  if (iVar10 == 0) {
                    DAT_1404e7e89 = 2;
                    uVar19 = FUN_140097640(&DAT_1404e6d80,local_3e58,"core_msgboxtitle_error");
                    pWVar13 = (LPCWSTR)FUN_140005c70(uVar19);
                    uVar19 = FUN_140097640(&DAT_1404e6d80,local_3e78,
                                           "core_msgbox_high_contrast_white");
                    pWVar14 = (LPCWSTR)FUN_140005c70(uVar19);
                    MessageBoxW((HWND)0x0,pWVar14,pWVar13,0x1010);
                    thunk_FUN_140016770(local_3e78);
                    thunk_FUN_140016770(local_3e58);
                    FUN_140021e00(&local_7333);
                    return 0;
                  }
                  DAT_1404e7e89 = 1;
                  DAT_1404e52a0 = (HWND)0x0;
                  DAT_1404e5298 = (HWND)0x0;
                  _DAT_1404e52a8 = 0;
                  FUN_140021e00(&local_7333);
                  return 0;
                }
                if (DAT_1404e7e89 == '\x01') {
                  DAT_1404e7e89 = 0;
                  FUN_140021e00(&local_7333);
                  return 0;
                }
              }
            }
            FUN_140021e00(&local_7333);
            return 0;
          }
          if ((DAT_1404dfbb1 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
            DebugBreak();
          }
          DAT_1404dfbb1 = '\0';
          goto LAB_140021ee4;
        }
        if ((param_4 != (int *)0x0) &&
           (iVar10 = FUN_1402cafd0(param_4,L"ImmersiveColorSet",0x12), iVar10 == 0)) {
          KillTimer(param_1,0x6e);
          SetTimer(param_1,0x6e,100,(TIMERPROC)0x0);
          return 0;
        }
      }
      goto switchD_140021f8c_caseD_1;
    }
    if ((DAT_1404df540 >> 9 & 1) != 0) {
      if ((DAT_1404dfbb0 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb0 = 0;
      FUN_140098760("Command ignored because Windows is reentrant.\n");
      return 0;
    }
    DAT_1404e8c20 = DAT_1404e8c20 + 1;
    if (DAT_1404e8c20 == 1) {
      DAT_1404df540 = DAT_1404df540 | 0x200;
    }
    local_7337 = '\x01';
    if (param_4 == (int *)0x0) goto LAB_140023ab6;
    switch(*(undefined8 *)param_4) {
    case 1000:
      cVar3 = FUN_140019190(&DAT_1404e52e0);
      if (cVar3 == '\0') {
        FUN_14006eaf0(&DAT_1404e52e0,1);
        FUN_140021e00(&local_7337);
        return 0;
      }
      goto switchD_1400222f8_default;
    case 0x3e9:
      cVar3 = FUN_140019190(&DAT_1404e52e0);
      if (cVar3 != '\0') goto switchD_1400222f8_default;
      uVar19 = 1;
      goto LAB_14002233b;
    case 0x3ea:
      cVar3 = FUN_140019190(&DAT_1404e52e0);
      if (cVar3 != '\0') {
        FUN_14006eaf0(&DAT_1404e52e0,0);
      }
      cVar3 = FUN_1400191a0(&DAT_1404e52e0);
      if (cVar3 == '\0') goto switchD_1400222f8_default;
      uVar19 = 0;
LAB_14002233b:
      FUN_14006eb10(&DAT_1404e52e0,uVar19);
switchD_1400222f8_default:
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3eb:
      FUN_14006ed70(&DAT_1404e52e0,1);
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3ec:
      FUN_14006ed70(&DAT_1404e52e0,0);
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3ed:
      FUN_140016fa0(local_6640);
      cVar3 = FUN_14001de80(param_4,local_6640);
      if (cVar3 == '\0') {
        uVar15 = 2;
        thunk_FUN_140017240(local_6640);
      }
      else {
        FUN_140084dd0(local_6f70,0);
        cVar3 = FUN_140017840(local_6640,local_6f70,0);
        if (cVar3 == '\0') {
          uVar15 = 2;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2db8,&DAT_140473b68);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f70,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2da8,"playinwindow");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar31 = FUN_140087640(local_6f70,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2dc8,"preset");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar32 = FUN_140087640(local_6f70,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
            uVar15 = 3;
          }
          else {
            FUN_140085cc0(uVar19,local_6eb0);
            cVar3 = FUN_140016930(local_6eb0);
            if (cVar3 == '\0') {
              cVar3 = FUN_140018980(local_6eb0);
              if (cVar3 == '\0') {
                FUN_1400187b0(local_6eb0,0x2f);
                cVar3 = FUN_140088890(uVar31);
                if (cVar3 == '\0') {
                  FUN_140017170(local_6b50,&DAT_140474480);
                }
                else {
                  FUN_140085cc0(uVar31,local_6b50);
                }
                cVar3 = FUN_140019190(&DAT_1404e52e0);
                if (cVar3 != '\0') {
                  FUN_14006eaf0(&DAT_1404e52e0,0);
                }
                FUN_14001dd30(local_6140,local_6f70,0);
                cVar3 = FUN_140016930(local_6b50);
                if (cVar3 == '\0') {
                  FUN_140084fe0(local_4028,local_6b50);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_2d98,"location");
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(local_6f70,&local_7348);
                  FUN_140085610(uVar19,local_4028);
                  FUN_140085440(local_4028);
                  FUN_140070dd0(&DAT_1404e52e0,local_6f70);
LAB_14002278b:
                  thunk_FUN_140017240(local_6140);
                  thunk_FUN_140017240(local_6b50);
                  thunk_FUN_140017240(local_6eb0);
                  FUN_140085440(local_6f70);
                  thunk_FUN_140017240(local_6640);
                  FUN_140021e00(&local_7337);
                  return 0;
                }
                cVar3 = FUN_140088890(uVar32);
                if (cVar3 == '\0') {
                  FUN_140017170(local_6b70,&DAT_140474480);
                }
                else {
                  FUN_140085cc0(uVar32,local_6b70);
                }
                uVar19 = FUN_140017110(local_6b70);
                plVar16 = (longlong *)FUN_140065cd0(&DAT_1404e52e0,local_6140,local_6eb0,0,uVar19);
                if (plVar16 != (longlong *)0x0) {
                  cVar3 = FUN_140016930();
                  if (cVar3 == '\0') {
                    (**(code **)(*plVar16 + 0x90))(plVar16,local_3fd8);
                    uVar19 = (**(code **)(*plVar16 + 0x98))(plVar16,local_27b0);
                    puVar18 = (undefined4 *)FUN_1400170d0(local_2d88,"wproperties");
                    local_7348 = *puVar18;
                    uStack_7344 = puVar18[1];
                    uStack_7340 = puVar18[2];
                    uStack_733c = puVar18[3];
                    uVar19 = FUN_140087640(uVar19,&local_7348);
                    FUN_140085090(local_4000,uVar19);
                    FUN_140085440(local_27b0);
                    uVar19 = FUN_140085090(local_2290,local_4000);
                    uVar31 = FUN_140017110(local_6eb0);
                    uVar32 = FUN_140017110(local_6140);
                    FUN_140043430(&PTR_s_wallpaperconfig_1404df5a0,uVar32,uVar31,uVar19,local_3fd8);
                    FUN_140085440(local_4000);
                    FUN_140085440(local_3fd8);
                  }
                  uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2268);
                  FUN_140019f60(uVar19);
                  thunk_FUN_140017240(local_6b70);
                  goto LAB_14002278b;
                }
                uVar15 = 5;
                thunk_FUN_140017240(local_6b70);
                thunk_FUN_140017240(local_6140);
                thunk_FUN_140017240(local_6b50);
              }
              else {
                uVar15 = 4;
              }
            }
            else {
              uVar15 = 5;
            }
            thunk_FUN_140017240(local_6eb0);
          }
        }
        FUN_140085440(local_6f70);
        thunk_FUN_140017240(local_6640);
      }
      break;
    case 0x3ee:
      FUN_140016fa0(local_6600);
      cVar3 = FUN_14001de80(param_4,local_6600);
      if (cVar3 == '\0') {
        uVar15 = 2;
        thunk_FUN_140017240(local_6600);
      }
      else {
        FUN_140084dd0(local_5fb8,0);
        cVar3 = FUN_140017840(local_6600,local_5fb8,0);
        if (cVar3 == '\0') {
          uVar15 = 2;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2d78,"playlist");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5fb8,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
            uVar15 = 3;
          }
          else {
            FUN_140085cc0(uVar19,local_6620);
            cVar3 = FUN_140016930(local_6620);
            if (cVar3 == '\0') {
              FUN_140084dd0(local_6738,0);
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_6738);
              cVar3 = FUN_1400888a0(local_6738);
              if (cVar3 != '\0') {
                FUN_140084dd0(local_5fe0,0);
                FUN_140088a90(local_6738,local_70e8);
                FUN_140088ad0(local_6738,local_6c00);
                cVar3 = FUN_140017580(local_70e8,local_6c00);
                while (cVar3 != '\0') {
                  uVar19 = FUN_140017600(local_70e8);
                  FUN_140085090(local_5468,uVar19);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_2d68,&DAT_1404748b8);
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(local_5468,&local_7348);
                  cVar3 = FUN_140088890(uVar19);
                  if (cVar3 != '\0') {
                    uVar19 = FUN_140085cc0(uVar19,local_3e38);
                    cVar3 = FUN_14000d0f0(uVar19,local_6620);
                    thunk_FUN_140017240(local_3e38);
                    if (cVar3 != '\0') {
                      FUN_140085520(local_5fe0,local_5468);
                    }
                  }
                  FUN_140085440(local_5468);
                  FUN_1400175a0(local_70e8);
                  cVar3 = FUN_140017580(local_70e8,local_6c00);
                }
                cVar3 = FUN_1400888b0(local_5fe0);
                if (cVar3 != '\0') {
                  FUN_14001dd30(local_5ce8,local_5fb8,0);
                  uVar19 = FUN_140085090(local_2240,local_5fe0);
                  FUN_140066aa0(&DAT_1404e52e0,local_5ce8,uVar19);
                  FUN_140067a00(&DAT_1404e52e0,local_5ce8,1);
                  FUN_14006a030(&DAT_1404e52e0,1);
                  uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2218);
                  FUN_140019f60(uVar19);
                  thunk_FUN_140017240(local_5ce8);
                  FUN_140085440(local_5fe0);
                  FUN_140085440(local_6738);
                  thunk_FUN_140017240(local_6620);
                  FUN_140085440(local_5fb8);
                  thunk_FUN_140017240(local_6600);
                  FUN_140021e00(&local_7337);
                  return 0;
                }
                FUN_140085440(local_5fe0);
              }
              FUN_140085440(local_6738);
              uVar15 = 5;
            }
            else {
              uVar15 = 4;
            }
            thunk_FUN_140017240(local_6620);
          }
        }
        FUN_140085440(local_5fb8);
        thunk_FUN_140017240(local_6600);
      }
      break;
    case 0x3ef:
      FUN_140016fa0(local_6580);
      cVar3 = FUN_14001de80(param_4,local_6580);
      if (cVar3 != '\0') {
        FUN_140084dd0(local_5ba0,0);
        cVar3 = FUN_140017840(local_6580,local_5ba0,0);
        if (cVar3 != '\0') {
          FUN_14001dd30(local_65a0,local_5ba0,1);
          cVar3 = FUN_140016930(local_65a0);
          if (cVar3 == '\0') {
            uVar19 = FUN_140017110(local_65a0);
            FUN_140017170(local_4a40,uVar19);
            cVar3 = FUN_140066370(&DAT_1404e52e0,local_4a40,1);
            thunk_FUN_140017240(local_4a40);
          }
          else {
            cVar3 = FUN_1400666c0(&DAT_1404e52e0);
          }
          uVar19 = FUN_140017110(local_65a0);
          FUN_140017170(local_4a60,uVar19);
          FUN_140071c30(&DAT_1404e52e0,local_4a60);
          thunk_FUN_140017240(local_4a60);
          if (cVar3 != '\0') {
            uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_21c8);
            FUN_140019f60(uVar19);
          }
          thunk_FUN_140017240(local_65a0);
          FUN_140085440(local_5ba0);
          thunk_FUN_140017240(local_6580);
          FUN_140021e00(&local_7337);
          return 0;
        }
        FUN_140085440(local_5ba0);
      }
      puVar17 = local_6580;
      goto LAB_1400239cd;
    case 0x3f0:
      FUN_140016fa0(local_6560);
      cVar3 = FUN_14001de80(param_4,local_6560);
      if (cVar3 == '\0') {
        uVar15 = 2;
        thunk_FUN_140017240(local_6560);
      }
      else {
        FUN_140084dd0(local_5f90,0);
        cVar3 = FUN_140017840(local_6560,local_5f90,0);
        if (cVar3 == '\0') {
          uVar15 = 2;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2d38,"properties");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5f90,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
            uVar15 = 3;
          }
          else {
            FUN_14001dd30(local_6b30,local_5f90,1);
            FUN_140084dd0(local_6788,0);
            uVar19 = FUN_140085cc0(uVar19,local_3df8);
            FUN_140017840(uVar19,local_6788,0);
            thunk_FUN_140017240(local_3df8);
            cVar3 = FUN_1400888b0(local_6788);
            if (cVar3 != '\0') {
              FUN_140084dd0(local_6db8,0);
              FUN_140088360(local_6788,local_6658);
              lVar22 = FUN_1400190b0(local_6658);
              lVar24 = FUN_140031a50(local_6658);
              for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
                FUN_140016fc0(local_5cc8,lVar22);
                FUN_140084dd0(local_55d0,7);
                puVar18 = (undefined4 *)FUN_14003aa40(local_5cc8,local_2d28);
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_6788,&local_7348);
                puVar18 = (undefined4 *)FUN_1400170d0(local_2d18,"value");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar31 = FUN_140087640(local_55d0,&local_7348);
                FUN_140085520(uVar31,uVar19);
                puVar18 = (undefined4 *)FUN_14003aa40(local_5cc8,local_2d08);
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_6db8,&local_7348);
                FUN_140085520(uVar19,local_55d0);
                FUN_140085440(local_55d0);
                thunk_FUN_140017240(local_5cc8);
              }
              FUN_14000dcc0(local_6658);
              uVar19 = FUN_1400191f0(&DAT_1404e52e0);
              cVar3 = FUN_140016930(local_6b30);
              if (cVar3 == '\0') {
                FUN_140030de0(uVar19,local_72a0,local_6b30);
                uVar19 = FUN_140030820(uVar19,local_58d8);
                cVar3 = FUN_14000ff10(local_72a0,uVar19);
                if ((cVar3 == '\0') &&
                   (lVar22 = FUN_140030c60(local_72a0), *(longlong *)(lVar22 + 0x20) != 0)) {
                  lVar22 = FUN_140030c60(local_72a0);
                  plVar16 = *(longlong **)(lVar22 + 0x20);
                  pcVar1 = *(code **)(*plVar16 + 0x80);
                  uVar19 = FUN_140085090(local_2150,local_6db8);
                  (*pcVar1)(plVar16,uVar19);
                }
                FUN_140030de0(&DAT_1404e63c8,local_7298,local_6b30);
                uVar19 = FUN_140030820(&DAT_1404e63c8,local_58d0);
                cVar3 = FUN_14000ff10(local_7298,uVar19);
                if (cVar3 == '\0') {
                  lVar22 = FUN_140030c60(local_7298);
                  lVar22 = FUN_1400190b0(*(undefined8 *)(lVar22 + 0x20));
                  if (lVar22 != 0) {
                    lVar22 = FUN_140030c60(local_7298);
                    plVar16 = (longlong *)FUN_1400190b0(*(undefined8 *)(lVar22 + 0x20));
                    pcVar1 = *(code **)(*plVar16 + 0x80);
                    uVar19 = FUN_140085090(local_2128,local_6db8);
                    (*pcVar1)(plVar16,uVar19);
                  }
                }
              }
              else {
                FUN_140030ee0(uVar19,local_72e0);
                FUN_140030820(uVar19,local_7260);
                cVar3 = FUN_14000ff10(local_72e0,local_7260);
                while (cVar3 == '\0') {
                  uVar19 = FUN_140030c60(local_72e0);
                  FUN_14002f980(local_17d8,uVar19);
                  if (local_17b8 != (longlong *)0x0) {
                    pcVar1 = *(code **)(*local_17b8 + 0x80);
                    uVar19 = FUN_140085090(local_21a0,local_6db8);
                    (*pcVar1)(local_17b8,uVar19);
                  }
                  FUN_14002fa50(local_17d8);
                  FUN_140030dd0(local_72e0);
                  cVar3 = FUN_14000ff10(local_72e0,local_7260);
                }
                FUN_140030ee0(&DAT_1404e63c8,local_72d8);
                FUN_140030820(&DAT_1404e63c8,local_7258);
                cVar3 = FUN_14000ff10(local_72d8,local_7258);
                while (cVar3 == '\0') {
                  lVar22 = FUN_140030c60(local_72d8);
                  FUN_140016fc0(local_3f10,lVar22);
                  local_3ef0 = *(undefined8 *)(lVar22 + 0x20);
                  plVar16 = (longlong *)FUN_1400190b0();
                  if (plVar16 != (longlong *)0x0) {
                    pcVar1 = *(code **)(*plVar16 + 0x80);
                    uVar19 = FUN_140085090(local_2178,local_6db8);
                    (*pcVar1)(plVar16,uVar19);
                  }
                  thunk_FUN_140017240(local_3f10);
                  FUN_140030dd0(local_72d8);
                  cVar3 = FUN_14000ff10(local_72d8,local_7258);
                }
              }
              puVar18 = (undefined4 *)FUN_1400170d0(local_2cf8,"audioprocessing");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6db8,&local_7348);
              cVar3 = FUN_1400888b0(uVar19);
              if (cVar3 != '\0') {
                FUN_14006e0c0(&DAT_1404e52e0);
              }
              FUN_140085440(local_6db8);
              FUN_140085440(local_6788);
              thunk_FUN_140017240(local_6b30);
              FUN_140085440(local_5f90);
              thunk_FUN_140017240(local_6560);
              FUN_140021e00(&local_7337);
              return 0;
            }
            uVar15 = 4;
            FUN_140085440(local_6788);
            thunk_FUN_140017240(local_6b30);
          }
        }
        FUN_140085440(local_5f90);
        thunk_FUN_140017240(local_6560);
      }
      break;
    case 0x3f1:
      FUN_140016fa0(local_6160);
      cVar3 = FUN_14001de80(param_4,local_6160);
      if (cVar3 != '\0') {
        FUN_140084dd0(local_5b78,0);
        cVar3 = FUN_140017840(local_6160,local_5b78,0);
        if (cVar3 != '\0') {
          FUN_14001dd30(local_58f8,local_5b78,1);
          cVar3 = FUN_140016930(local_58f8);
          if (cVar3 == '\0') {
            FUN_140067a00(&DAT_1404e52e0,local_58f8,1);
            FUN_14006a030(&DAT_1404e52e0,1);
          }
          else {
            FUN_1400679b0();
          }
          uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_2100);
          FUN_140019f60(uVar19);
          thunk_FUN_140017240(local_58f8);
          FUN_140085440(local_5b78);
          thunk_FUN_140017240(local_6160);
          FUN_140021e00(&local_7337);
          return 0;
        }
        FUN_140085440(local_5b78);
      }
      puVar17 = local_6160;
      goto LAB_1400239cd;
    case 0x3f2:
      PostMessageW(param_1,0x406,0,0);
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3f3:
      PostMessageW(param_1,0x406,1,0);
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3f4:
      FUN_140016fa0(local_6b10);
      cVar3 = FUN_14001de80(param_4,local_6b10);
      if (cVar3 != '\0') {
        FUN_140084dd0(local_55a8,0);
        cVar3 = FUN_140017840(local_6b10,local_55a8,0);
        if (cVar3 != '\0') {
          cVar3 = FUN_1400182c0(&DAT_1404e64d0);
          if (cVar3 == '\0') {
            FUN_14003aa00(param_1,0x111,0x9c59,0);
          }
          cVar3 = FUN_1400182c0(&DAT_1404e64d0);
          if (cVar3 != '\0') {
            FUN_140018240(local_4aa0,0x79,local_6b10);
            FUN_1400182d0(&DAT_1404e64d0,local_4aa0);
            FUN_140018220(local_4a80,1);
            FUN_1400182d0(&DAT_1404e64d0,local_4a80);
            FUN_1400182b0(local_4a80);
            FUN_1400182b0(local_4aa0);
          }
          FUN_140085440(local_55a8);
          thunk_FUN_140017240(local_6b10);
          FUN_140021e00(&local_7337);
          return 0;
        }
        FUN_140085440(local_55a8);
      }
      puVar17 = local_6b10;
      goto LAB_1400239cd;
    case 0x3f5:
      FUN_140016fa0(local_65c0);
      cVar3 = FUN_14001de80(param_4,local_65c0);
      if (cVar3 == '\0') {
        uVar15 = 2;
        thunk_FUN_140017240(local_65c0);
      }
      else {
        FUN_140084dd0(local_5bc8,0);
        cVar3 = FUN_140017840(local_65c0,local_5bc8,0);
        if (cVar3 == '\0') {
          uVar15 = 2;
        }
        else {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2d58,"profile");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5bc8,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 == '\0') {
            uVar15 = 3;
          }
          else {
            FUN_140085cc0(uVar19,local_65e0);
            cVar3 = FUN_140016930(local_65e0);
            if (cVar3 == '\0') {
              FUN_140084dd0(local_6760,0);
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_6760);
              cVar3 = FUN_1400888a0(local_6760);
              if ((cVar3 != '\0') && (iVar10 = FUN_1400863a0(local_6760), iVar10 != 0)) {
                FUN_140088a90(local_6760,local_7128);
                FUN_140088ad0(local_6760,local_6bf0);
                cVar3 = FUN_140017580(local_7128,local_6bf0);
                while (cVar3 != '\0') {
                  uVar19 = FUN_140017600(local_7128);
                  FUN_140085090(local_55f8,uVar19);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_2d48,&DAT_1404748b8);
                  local_7348 = *puVar18;
                  uStack_7344 = puVar18[1];
                  uStack_7340 = puVar18[2];
                  uStack_733c = puVar18[3];
                  uVar19 = FUN_140087640(local_55f8,&local_7348);
                  cVar3 = FUN_140088890(uVar19);
                  if (cVar3 == '\0') {
LAB_140022d93:
                    bVar39 = false;
                  }
                  else {
                    uVar15 = 0x100;
                    uVar19 = FUN_140085cc0(uVar19,local_3e18);
                    cVar3 = FUN_14000d0f0(uVar19,local_65e0);
                    if (cVar3 == '\0') goto LAB_140022d93;
                    bVar39 = true;
                  }
                  if ((int)uVar15 != 0) {
                    uVar15 = 0;
                    thunk_FUN_140017240(local_3e18);
                  }
                  if (bVar39) {
                    FUN_14001dc40(local_55f8);
                    uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_21f0);
                    FUN_140019f60(uVar19);
                  }
                  FUN_140085440(local_55f8);
                  FUN_1400175a0(local_7128);
                  cVar3 = FUN_140017580(local_7128,local_6bf0);
                }
              }
              FUN_140085440(local_6760);
              thunk_FUN_140017240(local_65e0);
              FUN_140085440(local_5bc8);
              thunk_FUN_140017240(local_65c0);
              FUN_140021e00(&local_7337);
              return 0;
            }
            uVar15 = 4;
            thunk_FUN_140017240(local_65e0);
          }
        }
        FUN_140085440(local_5bc8);
        thunk_FUN_140017240(local_65c0);
      }
      break;
    case 0x3f6:
      FUN_140019170(&DAT_1404e52e0,0x400000);
      FUN_140021e00(&local_7337);
      return 0;
    case 0x3f7:
      FUN_140016fa0(local_6540);
      cVar3 = FUN_14001de80(param_4,local_6540);
      if (cVar3 != '\0') {
        FUN_140084dd0(local_5f68,0);
        cVar3 = FUN_140017840(local_6540,local_5f68,0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2ce8,&DAT_140473d8c);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5f68,&local_7348);
          cVar3 = FUN_140088890(uVar19);
          if (cVar3 != '\0') {
            uVar19 = FUN_140085cc0(uVar19,local_3dd8);
            FUN_140005880(local_5c88,uVar19);
            thunk_FUN_140017240(local_3dd8);
            FUN_140016fa0(local_6e20);
            FUN_14001dd30(local_5ca8,local_5f68,1);
            uVar19 = FUN_1400191f0(&DAT_1404e52e0);
            FUN_140030de0(uVar19,local_7290,local_5ca8);
            uVar31 = FUN_140030820(uVar19,local_58c8);
            cVar3 = FUN_14000ff10(local_7290,uVar31);
            if ((cVar3 == '\0') &&
               (lVar22 = FUN_140030c60(local_7290), *(longlong *)(lVar22 + 0x20) != 0)) {
              puVar17 = local_7290;
LAB_14002393e:
              lVar22 = FUN_140030c60(puVar17);
              uVar19 = FUN_1400190a0(*(undefined8 *)(lVar22 + 0x20));
              FUN_14000de00(local_6e20,uVar19);
            }
            else {
              cVar3 = FUN_140016930(uVar19);
              if (cVar3 == '\0') {
                uVar31 = FUN_140030ee0(uVar19,local_5d60);
                lVar22 = FUN_140030c60(uVar31);
                if (*(longlong *)(lVar22 + 0x20) != 0) {
                  puVar17 = (undefined1 *)FUN_140030ee0(uVar19,local_5d58);
                  goto LAB_14002393e;
                }
              }
            }
            pWVar13 = (LPCWSTR)FUN_140005c70(local_5c88);
            hFile = CreateFileW(pWVar13,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
            if (hFile != (HANDLE)0xffffffffffffffff) {
              FUN_1404217a0(local_c48,0,0x400);
              uVar19 = FUN_140017100(local_6e20);
              uVar31 = FUN_140017110(local_6e20);
              FUN_14003aa70(local_c48,0x400,uVar31,uVar19);
              local_72ac = 0;
              WriteFile(hFile,local_c48,0x400,&local_72ac,(LPOVERLAPPED)0x0);
              CloseHandle(hFile);
              thunk_FUN_140017240(local_5ca8);
              thunk_FUN_140017240(local_6e20);
              thunk_FUN_140016770(local_5c88);
              FUN_140085440(local_5f68);
              thunk_FUN_140017240(local_6540);
              FUN_140021e00(&local_7337);
              return 0;
            }
            thunk_FUN_140017240(local_5ca8);
            thunk_FUN_140017240(local_6e20);
            thunk_FUN_140016770(local_5c88);
          }
        }
        FUN_140085440(local_5f68);
      }
      puVar17 = local_6540;
LAB_1400239cd:
      thunk_FUN_140017240(puVar17);
      uVar15 = 2;
      break;
    default:
      goto switchD_1400222f8_default;
    }
    if (local_7337 == '\0') {
      return uVar15;
    }
LAB_140023ab6:
    DAT_1404e8c20 = DAT_1404e8c20 + -1;
    if (DAT_1404e8c20 != 0) {
      return uVar15;
    }
    DAT_1404df540 = DAT_1404df540 & 0xfffffdff;
    return uVar15;
  }
  if (param_2 == 0x7e) goto switchD_14002d939_caseD_409;
  if (param_2 == 0x111) {
    if ((DAT_1404df540 & 0x200) != 0) {
      if ((DAT_1404dfbb4 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb4 = '\0';
      param_2 = 0x111;
      goto LAB_140021ee4;
    }
    FUN_140021dd0(local_res10);
    uVar35 = uVar35 & 0xffff;
    if (uVar34 < 0x9c4b) {
      if (uVar34 == 0x9c4a) {
        PostMessageW(param_1,0x12,0,0);
        FUN_140021e00(local_res10);
        return 0;
      }
      uVar36 = uVar35 - 0x88bb;
      switch(uVar36) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        FUN_140084dd0(local_5f40,0);
        iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
        if (iVar10 != 0) {
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigrecent",local_5f40);
          cVar3 = FUN_1400888a0(local_5f40);
          if (((cVar3 != '\0') && (0x88ba < uVar34)) &&
             (uVar35 = FUN_1400863a0(local_5f40), uVar36 < uVar35)) {
            uVar19 = thunk_FUN_140086540(local_5f40,uVar36);
            FUN_140085090(local_6de0,uVar19);
            cVar3 = FUN_1400888b0(local_6de0);
            if (cVar3 != '\0') {
              puVar18 = (undefined4 *)FUN_1400170d0(local_2cb8,"config");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6de0,&local_7348);
              cVar3 = FUN_1400888b0(uVar19);
              if (cVar3 != '\0') {
                puVar18 = (undefined4 *)FUN_1400170d0(local_2c98,"config");
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar19 = FUN_140087640(local_6de0,&local_7348);
                FUN_140085520(local_6de0,uVar19);
                FUN_1400666c0(&DAT_1404e52e0);
                FUN_14006a490(&DAT_1404e52e0,local_6de0);
                FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,
                              local_6de0);
                cVar3 = FUN_140019190(&DAT_1404e52e0);
                if (cVar3 != '\0') {
                  FUN_14006eaf0(&DAT_1404e52e0,0);
                }
                FUN_140021e00(local_res10);
                FUN_140018220(local_4b00,0x68);
                FUN_140021e50(param_1,0x401,0,local_4b00);
                FUN_1400182b0(local_4b00);
              }
            }
            FUN_140085440(local_6de0);
          }
        }
        FUN_140085440(local_5f40);
        FUN_140021e00(local_res10);
        return 0;
      case 10:
        uVar19 = FUN_140084dd0(local_2788,6);
        FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigrecent",uVar19);
        FUN_140085440(local_2788);
        FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140019350(0);
        FUN_140021e00(local_res10);
        return 0;
      }
    }
    else {
      switch(uVar35) {
      case 0x9c4d:
        PostMessageW(DAT_1404e5280,0x111,0x9c59,3);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c52:
        FUN_140021e00(local_res10);
        FUN_140084700(&DAT_1404e6a70);
        FUN_140021e20(local_res10);
        cVar3 = FUN_1400182c0(&DAT_1404e6a70);
        if (cVar3 != '\0') {
          FUN_140084550();
          FUN_140018220(local_4c00,1);
          FUN_1400182d0(&DAT_1404e6a70,local_4c00);
          FUN_1400182b0(local_4c00);
          FUN_140021e00(local_res10);
          return 0;
        }
        uVar19 = FUN_1400187a0(&DAT_1404e6a70);
        FUN_140082040(uVar19,param_1,0x401);
        uVar19 = FUN_140017170(local_2588,"-window editor");
        uVar19 = FUN_14001b9c0(local_3bf8,uVar19);
        uVar19 = FUN_140017110(uVar19);
        FUN_1400832c0(&DAT_1404e6a70,"bin/wallpaperui.exe",uVar19,"WPEhandlerEditor");
        thunk_FUN_140017240(local_3bf8);
        FUN_140084dd0(local_5378,0);
        FUN_140084dd0(local_57d0,0);
        FUN_140084dd0(local_53a0,7);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"editor",local_5378);
        if (param_4 != (int *)0x0) {
          FUN_140084f50(local_4438,param_4);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3658,"initialCommands");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_53a0,&local_7348);
          FUN_140085610(uVar19,local_4438);
          FUN_140085440(local_4438);
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_3648,"editor");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_57d0,&local_7348);
        FUN_140085520(uVar19,local_5378);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3638,"config");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_57d0,&local_7348);
        FUN_140085520(uVar19,local_53a0);
        FUN_140004d00(local_4c40,local_57d0,0);
        FUN_140018240(local_4c20,300,local_4c40);
        FUN_1400182d0(&DAT_1404e6a70,local_4c20);
        FUN_1400182b0(local_4c20);
        thunk_FUN_140017240(local_4c40);
        FUN_140085440(local_53a0);
        FUN_140085440(local_57d0);
        FUN_140085440(local_5378);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c53:
        FUN_140021e00(local_res10);
        FUN_140084700(&DAT_1404e67a0);
        FUN_140021e20(local_res10);
        cVar3 = FUN_1400182c0(&DAT_1404e67a0);
        if (cVar3 != '\0') {
          FUN_140084550(&DAT_1404e67a0);
          FUN_140018220(local_4bc0,1);
          FUN_1400182d0(&DAT_1404e67a0,local_4bc0);
          FUN_1400182b0(local_4bc0);
          FUN_140021e00(local_res10);
          return 0;
        }
        FUN_140084dd0(local_53c8,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_53c8);
        FUN_140084dd0(local_6f98,0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3738,&DAT_1404737fc);
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6f98,&local_7348);
        FUN_140085520(uVar19,local_53c8);
        FUN_140084dd0(local_53f0,7);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"shared",local_53f0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3728,"shared");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6f98,&local_7348);
        FUN_140085520(uVar19,local_53f0);
        FUN_140084dd0(local_57f8,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_57f8);
        cVar3 = FUN_1400888a0(local_57f8);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3718,"playlists");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f98,&local_7348);
          FUN_140085520(uVar19,local_57f8);
        }
        FUN_140084dd0(local_5820,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_5820);
        cVar3 = FUN_1400888a0(local_5820);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_3708,"profiles");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f98,&local_7348);
          FUN_140085520(uVar19,local_5820);
        }
        FUN_140084dd0(local_5848,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_5848);
        cVar3 = FUN_1400888a0(local_5848);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_36f8,"localfiles");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6f98,&local_7348);
          FUN_140085520(uVar19,local_5848);
        }
        uVar19 = FUN_14012e6e0();
        FUN_140085090(local_5418,uVar19);
        FUN_140084dd0(local_5440,6);
        FUN_1400316b0(local_4778);
        FUN_14000d970(local_47b8);
        iVar10 = FUN_1401307f0();
        if (0 < iVar10) {
          do {
            lVar22 = FUN_140130820(uVar15);
            FUN_140031690(local_4778,local_36e8,lVar22 + 0x38);
            uVar19 = FUN_140030830(local_47b8,lVar22 + 0x38);
            FUN_14000de00(uVar19,lVar22 + 0x58);
            uVar35 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar35;
            iVar10 = FUN_1401307f0();
          } while ((int)uVar35 < iVar10);
        }
        FUN_140088360(local_5418,local_66a0);
        lVar22 = FUN_1400190b0(local_66a0);
        lVar24 = FUN_140031a50(local_66a0);
        for (; lVar22 != lVar24; lVar22 = lVar22 + 0x20) {
          puVar18 = (undefined4 *)FUN_14003aa40(lVar22,local_36d8);
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5418,&local_7348);
          puVar18 = (undefined4 *)FUN_1400170d0(local_36c8,"location");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(uVar19,&local_7348);
          cVar3 = FUN_140088880(uVar19);
          if (cVar3 != '\0') {
            FUN_140084dd0(local_6940,0);
            FUN_140084fe0(local_44b0,lVar22);
            puVar18 = (undefined4 *)FUN_1400170d0(local_36b8,"device");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar31 = FUN_140087640(local_6940,&local_7348);
            FUN_140085610(uVar31,local_44b0);
            FUN_140085440(local_44b0);
            puVar18 = (undefined4 *)FUN_1400170d0(local_36a8,"value");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar31 = FUN_140087640(local_6940,&local_7348);
            FUN_140085520(uVar31,uVar19);
            uVar19 = FUN_1400313b0(local_4778,local_5d50,lVar22);
            uVar31 = FUN_140030820(local_4778,local_5d48);
            uVar4 = FUN_14000ff10(uVar19,uVar31);
            FUN_140085070(local_4488,uVar4);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3698,"readonly");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_6940,&local_7348);
            FUN_140085610(uVar19,local_4488);
            FUN_140085440(local_4488);
            FUN_1400307a0(local_47b8,local_7248,lVar22);
            uVar19 = FUN_140030820(local_47b8,local_5d40);
            cVar3 = FUN_14000ff10(local_7248,uVar19);
            if (cVar3 == '\0') {
              lVar21 = FUN_140030c60(local_7248);
              FUN_140084fe0(local_4460,lVar21 + 0x20);
              puVar18 = (undefined4 *)FUN_1400170d0(local_3688,&DAT_1404748b8);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_6940,&local_7348);
              FUN_140085610(uVar19,local_4460);
              FUN_140085440(local_4460);
            }
            FUN_140087650(local_5440,local_6940);
            FUN_140085440(local_6940);
          }
        }
        FUN_14000dcc0(local_66a0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3678,"monitormap");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6f98,&local_7348);
        FUN_140085520(uVar19,local_5440);
        FUN_140084dd0(local_51e8,6);
        uVar19 = FUN_140019210(&DAT_1404e52e0);
        FUN_140056220(uVar19,local_51e8);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3668,"discoveredplugins");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6f98,&local_7348);
        FUN_140085520(uVar19,local_51e8);
        FUN_140004d00(local_5c68,local_6f98,0);
        FUN_14000de00(&DAT_1404df570,local_5c68);
        FUN_1400339f0(local_47f8);
        uVar19 = FUN_140017470(0x10,local_47f8);
        uVar19 = FUN_140034f60(uVar19,local_7317);
        FUN_140037820(local_47f8,uVar19);
        uVar19 = FUN_140031a20(local_15f8,local_47f8);
        FUN_140084630(&DAT_1404e67a0,uVar19);
        uVar19 = FUN_1400187a0(&DAT_1404e67a0);
        FUN_140082040(uVar19,param_1,0x401);
        uVar19 = FUN_140017170(local_25a8,"-window settings");
        uVar19 = FUN_14001b9c0(local_3c18,uVar19);
        uVar19 = FUN_140017110(uVar19);
        FUN_1400832c0(&DAT_1404e67a0,"bin/wallpaperui.exe",uVar19,"WPEhandlerSettings");
        thunk_FUN_140017240(local_3c18);
        FUN_140018240(local_4be0,200,local_5c68);
        FUN_1400182d0(&DAT_1404e67a0,local_4be0);
        FUN_1400182b0(local_4be0);
        FUN_1400190c0(local_47f8);
        thunk_FUN_140017240(local_5c68);
        FUN_140085440(local_51e8);
        FUN_14002f960(local_47b8);
        FUN_14002f780(local_4778);
        FUN_140085440(local_5440);
        FUN_140085440(local_5418);
        FUN_140085440(local_5848);
        FUN_140085440(local_5820);
        FUN_140085440(local_57f8);
        FUN_140085440(local_53f0);
        FUN_140085440(local_6f98);
        FUN_140085440(local_53c8);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c56:
        bVar5 = FUN_140019190(&DAT_1404e52e0);
        FUN_14006eaf0(&DAT_1404e52e0,bVar5 ^ 1);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c57:
        bVar5 = FUN_1400191a0(&DAT_1404e52e0);
        FUN_14006eb10(&DAT_1404e52e0,bVar5 ^ 1);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c59:
        FUN_140021e00(local_res10);
        FUN_140084700(&DAT_1404e64d0);
        FUN_140021e20(local_res10);
        if (param_4 == (int *)0x1) {
          FUN_1400844b0(&DAT_1404e64d0,1000,0);
        }
        cVar3 = FUN_1400182c0(&DAT_1404e64d0);
        if (cVar3 != '\0') {
          FUN_140084550(&DAT_1404e64d0);
          FUN_140018220(local_4b40,1);
          FUN_1400182d0(&DAT_1404e64d0,local_4b40);
          FUN_1400182b0(local_4b40);
          FUN_140021e00(local_res10);
          return 0;
        }
        FUN_140084dd0(local_71e0,0);
        FUN_140084dd0(local_67b0,0);
        FUN_140084dd0(local_6d90,0);
        FUN_140084f50(local_3f88,PTR_s_wallpaperconfig_1404df5a0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2c88,"group");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085610(uVar19,local_3f88);
        FUN_140085440(local_3f88);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_67b0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver",local_6d90);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2c78,"layout");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_67b0,&local_7348);
        cVar3 = FUN_1400886e0(uVar19);
        if (cVar3 == '\0') {
          FUN_140084ef0(local_3f60,0);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2c68,"layout");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_67b0,&local_7348);
          FUN_140085610(uVar19,local_3f60);
          FUN_140085440(local_3f60);
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_2c58,"layout");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6d90,&local_7348);
        cVar3 = FUN_1400886e0(uVar19);
        if (cVar3 == '\0') {
          FUN_140084ef0(local_3f38,0);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2c48,"layout");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6d90,&local_7348);
          FUN_140085610(uVar19,local_3f38);
          FUN_140085440(local_3f38);
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_2c38,"sameaswallpaper");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_6d90,&local_7348);
        cVar3 = FUN_1400886d0(uVar19);
        if (cVar3 == '\0') {
          FUN_140085070(local_46b8,1);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2c28,"sameaswallpaper");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_6d90,&local_7348);
          FUN_140085610(uVar19,local_46b8);
          FUN_140085440(local_46b8);
        }
        FUN_140084dd0(local_5870,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"localfiles",local_5870);
        cVar3 = FUN_1400888a0(local_5870);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2c18,"localfiles");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_71e0,&local_7348);
          FUN_140085520(uVar19,local_5870);
        }
        FUN_140084dd0(local_5898,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_5898);
        cVar3 = FUN_1400888a0(local_5898);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2c08,"playlists");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_71e0,&local_7348);
          FUN_140085520(uVar19,local_5898);
        }
        FUN_140084dd0(local_58c0,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_58c0);
        cVar3 = FUN_1400888a0(local_58c0);
        if (cVar3 != '\0') {
          puVar18 = (undefined4 *)FUN_1400170d0(local_2bf8,"profiles");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_71e0,&local_7348);
          FUN_140085520(uVar19,local_58c0);
        }
        FUN_140084dd0(local_5490,7);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2be8,"selectedwallpapers");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_67b0,&local_7348);
        uVar31 = FUN_1400191f0(&DAT_1404e52e0);
        FUN_140030ee0(uVar31,local_72d0);
        FUN_140030820(uVar31,local_7250);
        cVar3 = FUN_14000ff10(local_72d0,local_7250);
        while (cVar3 == '\0') {
          lVar24 = FUN_140030c60(local_72d0);
          lVar22 = *(longlong *)(lVar24 + 0x20);
          if (lVar22 != 0) {
            uVar31 = FUN_14001c0a0(local_2760,lVar22,lVar24);
            puVar18 = (undefined4 *)FUN_14003aa40(lVar24,local_2bd8);
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar32 = FUN_140087640(local_5490,&local_7348);
            FUN_140085610(uVar32,uVar31);
            FUN_140085440(local_2760);
            cVar3 = FUN_1400888b0(uVar19);
            if (cVar3 != '\0') {
              puVar18 = (undefined4 *)FUN_14003aa40(lVar24,local_2bc8);
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar31 = FUN_140087640(uVar19,&local_7348);
              cVar3 = FUN_1400888b0(uVar31);
              if (cVar3 != '\0') {
                uVar32 = FUN_140019090(lVar22);
                FUN_140084fe0(local_4690,uVar32);
                puVar18 = (undefined4 *)FUN_1400170d0(local_2bb8,&DAT_140473b68);
                local_7348 = *puVar18;
                uStack_7344 = puVar18[1];
                uStack_7340 = puVar18[2];
                uStack_733c = puVar18[3];
                uVar31 = FUN_140087640(uVar31,&local_7348);
                FUN_140085610(uVar31,local_4690);
                FUN_140085440(local_4690);
              }
            }
          }
          FUN_140030dd0(local_72d0);
          cVar3 = FUN_14000ff10(local_72d0,local_7250);
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ba8,"wproperties");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_5490);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b98,"wallpaperconfig");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_67b0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b88,"wallpaperconfigscreensaver");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_6d90);
        FUN_140084dd0(local_54b8,7);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"browser",local_54b8);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b78,"browser");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_54b8);
        FUN_140084dd0(local_54e0,7);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"shared",local_54e0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b68,"shared");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_54e0);
        FUN_140084dd0(local_5d10,7);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5d10);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b58,"general");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_5d10);
        FUN_140084dd0(local_7150,7);
        if (param_4 == (int *)0x2) {
          FUN_140085070(local_4668,1);
          puVar18 = (undefined4 *)FUN_1400170d0(local_2b48,"safemodewarning");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7150,&local_7348);
          FUN_140085610(uVar19,local_4668);
          puVar17 = local_4668;
LAB_140025971:
          FUN_140085440(puVar17);
        }
        else {
          if (param_4 == (int *)0x3) {
            FUN_140085070(local_4640,1);
            puVar18 = (undefined4 *)FUN_1400170d0(local_2b38,"showworkshop");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_7150,&local_7348);
            FUN_140085610(uVar19,local_4640);
            puVar17 = local_4640;
            goto LAB_140025971;
          }
          if (param_4 == (int *)&DAT_00000004) {
            FUN_140085070(local_4618,1);
            puVar18 = (undefined4 *)FUN_1400170d0(local_2b28,"showscreensavers");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_7150,&local_7348);
            FUN_140085610(uVar19,local_4618);
            puVar17 = local_4618;
            goto LAB_140025971;
          }
        }
        uVar19 = FUN_140072050(&DAT_1404e52e0,local_3c78);
        FUN_140084fe0(local_45f0,uVar19);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b18,"activeloadrule");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_45f0);
        FUN_140085440(local_45f0);
        thunk_FUN_140017240(local_3c78);
        uVar4 = FUN_140019160(&DAT_1404e52e0,0x400);
        FUN_140085070(local_45c8,uVar4);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2b08,"activevramtrigger");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_45c8);
        FUN_140085440(local_45c8);
        uVar9 = FUN_14003dcf0();
        FUN_140084ef0(local_45a0,uVar9);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2af8,"dayofweekoffset");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_45a0);
        FUN_140085440(local_45a0);
        uVar4 = FUN_14003dd40();
        FUN_140085070(local_4578,uVar4);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ae8,"timeformat12hr");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_4578);
        FUN_140085440(local_4578);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ad8,"slideshowkiller");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5d10,&local_7348);
        cVar3 = FUN_140086300(uVar19);
        if (cVar3 == '\0') {
          local_7310 = 0;
          local_72a8 = 4;
          local_72a4 = 4;
          LVar8 = RegGetValueA((HKEY)0xffffffff80000001,
                               "Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Wallpapers",
                               "BackgroundType",0x10,&local_72a4,&local_7310,&local_72a8);
          if ((LVar8 == 0) && (local_7310 - 2U < 2)) {
            uVar19 = 1;
            goto LAB_140025ba5;
          }
        }
        uVar19 = 0;
LAB_140025ba5:
        FUN_140085070(local_4550,uVar19);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ac8,"showslideshowwarning");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_4550);
        FUN_140085440(local_4550);
        lVar22 = FUN_14006edd0(&DAT_1404e52e0);
        FUN_140085070(local_4528,lVar22 == 0);
        puVar18 = (undefined4 *)FUN_1400170d0(local_2ab8,"candisableslideshowwarning");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_7150,&local_7348);
        FUN_140085610(uVar19,local_4528);
        FUN_140085440(local_4528);
        FUN_140016fa0(local_4ba0);
        local_66d0[0] = '\0';
        FUN_140016fa0(local_66c8);
        local_66a8 = 0;
        cVar3 = FUN_140046870(&PTR_s_wallpaperconfig_1404df5a0,local_4ba0,local_66d0);
        if ((cVar3 != '\0') && (local_66d0[0] != '\0')) {
          FUN_140084dd0(local_5b28,7);
          FUN_140084f20(local_4500,local_66a8);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3ee8,"timestamp");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5b28,&local_7348);
          FUN_140085610(uVar19,local_4500);
          FUN_140085440(local_4500);
          FUN_140084fe0(local_44d8,local_66c8);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3ed8,"header");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5b28,&local_7348);
          FUN_140085610(uVar19,local_44d8);
          FUN_140085440(local_44d8);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3ec8,"seasonaldialogoptions");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_7150,&local_7348);
          FUN_140085520(uVar19,local_5b28);
          FUN_140085440(local_5b28);
        }
        puVar18 = (undefined4 *)FUN_1400170d0(local_3eb8,"browseroptions");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_71e0,&local_7348);
        FUN_140085520(uVar19,local_7150);
        FUN_140004d00(local_4b80,local_71e0,0);
        FUN_140085090(local_5f18,local_71e0);
        FUN_140084dd0(local_5508,0);
        FUN_140084dd0(local_5530,0);
        FUN_140044160(&PTR_s_wallpaperconfig_1404df5a0,local_5508,local_5530);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3ea8,"wproperties");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5f18,&local_7348);
        FUN_140085520(uVar19,local_5508);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3e98,"wpropertiesvd");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5f18,&local_7348);
        FUN_140085520(uVar19,local_5530);
        puVar18 = (undefined4 *)FUN_1400170d0(local_3e88,"wallpaperconfigvdesktop");
        local_7348 = *puVar18;
        uStack_7344 = puVar18[1];
        uStack_7340 = puVar18[2];
        uStack_733c = puVar18[3];
        uVar19 = FUN_140087640(local_5f18,&local_7348);
        FUN_140044570(&PTR_s_wallpaperconfig_1404df5a0,uVar19);
        uVar19 = FUN_140004d00(local_3c58,local_5f18,0);
        FUN_14000de40(&DAT_1404df550,uVar19);
        thunk_FUN_140017240(local_3c58);
        FUN_1400339f0(local_4838);
        uVar19 = FUN_140017470(0x10,local_4838);
        uVar19 = FUN_140034f50(uVar19,&local_7318);
        FUN_140037820(local_4838,uVar19);
        uVar19 = FUN_140031a20(local_1638,local_4838);
        FUN_140084630(&DAT_1404e64d0,uVar19);
        uVar19 = FUN_1400187a0(&DAT_1404e64d0);
        FUN_140082040(uVar19,param_1,0x401);
        uVar19 = FUN_140017170(local_25c8,"-window browsewallpapers");
        uVar19 = FUN_14001b9c0(local_3c38,uVar19);
        uVar19 = FUN_140017110(uVar19);
        FUN_1400832c0(&DAT_1404e64d0,"bin/wallpaperui.exe",uVar19,"WPEhandlerBrowseWallpapers");
        thunk_FUN_140017240(local_3c38);
        FUN_140018240(local_4b60,100,local_4b80);
        FUN_1400182d0(&DAT_1404e64d0,local_4b60);
        FUN_1400182b0(local_4b60);
        FUN_1400190c0(local_4838);
        FUN_140085440(local_5530);
        FUN_140085440(local_5508);
        FUN_140085440(local_5f18);
        thunk_FUN_140017240(local_4b80);
        FUN_14002f950(local_66d0);
        thunk_FUN_140017240(local_4ba0);
        FUN_140085440(local_7150);
        FUN_140085440(local_5d10);
        FUN_140085440(local_54e0);
        FUN_140085440(local_54b8);
        FUN_140085440(local_5490);
        FUN_140085440(local_58c0);
        FUN_140085440(local_5898);
        FUN_140085440(local_5870);
        FUN_140085440(local_6d90);
        FUN_140085440(local_67b0);
        FUN_140085440(local_71e0);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c5a:
        if (param_4 < (int *)0x24) {
          uVar20 = (ulonglong)param_4 & 0xffffffff;
          if (0x23 < (uint)param_4) {
            uVar20 = uVar15;
          }
          FUN_140017170(local_5c48,(&PTR_s_english_140478d78)[uVar20 * 4]);
          FUN_140084dd0(local_5ef0,0);
          FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5ef0);
          FUN_140084fe0(local_43e8,local_5c48);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3618,"steamlanguage");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar19 = FUN_140087640(local_5ef0,&local_7348);
          FUN_140085610(uVar19,local_43e8);
          FUN_140085440(local_43e8);
          FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5ef0);
          uVar19 = FUN_140017110(local_5c48);
          puVar18 = (undefined4 *)FUN_1400170d0(local_3608,"language");
          local_7348 = *puVar18;
          uStack_7344 = puVar18[1];
          uStack_7340 = puVar18[2];
          uStack_733c = puVar18[3];
          uVar31 = FUN_140087640(local_5ef0,&local_7348);
          uVar31 = FUN_140085ca0(uVar31);
          FUN_140097570(&DAT_1404e6d80,uVar31,uVar19);
          FUN_140021e00(local_res10);
          uVar9 = FUN_140015df0(&DAT_1404e6d80);
          uVar19 = FUN_1400982b0(uVar9);
          FUN_140017170(local_4c60,uVar19);
          FUN_140018240(local_4c80,3,local_4c60);
          thunk_FUN_140017240(local_4c60);
          FUN_140021e50(param_1,0x401,1,local_4c80);
          FUN_1400182b0(local_4c80);
          FUN_140085440(local_5ef0);
          thunk_FUN_140017240(local_5c48);
          FUN_140021e00(local_res10);
          return 0;
        }
        goto LAB_1400273a2;
      case 0x9c5b:
        local_730c = 0;
        local_7308 = 0;
        SystemParametersInfoW(0x1014,0,&local_730c,0);
        SystemParametersInfoW(0x1012,0,&local_7308,0);
        if ((local_730c != 0) || (local_7308 != 0)) {
          Sleep(500);
        }
        local_71a8 = 0;
        local_71b8 = (undefined8 *)0x0;
        puStack_71b0 = (undefined8 *)0x0;
        FUN_14000ec50(&local_71b8);
        uVar19 = FUN_1400191f0(&DAT_1404e52e0);
        FUN_140030ee0(uVar19,local_72c8);
        FUN_140030820(uVar19,local_7240);
        cVar3 = FUN_14000ff10(local_72c8,local_7240);
        while (cVar3 == '\0') {
          lVar22 = FUN_140030c60(local_72c8);
          if (*(longlong *)(lVar22 + 0x20) != 0) {
            FUN_140085090(local_4410,*(longlong *)(lVar22 + 0x20) + 0x10);
            puVar18 = (undefined4 *)FUN_1400170d0(local_3628,"workshopid");
            local_7348 = *puVar18;
            uStack_7344 = puVar18[1];
            uStack_7340 = puVar18[2];
            uStack_733c = puVar18[3];
            uVar19 = FUN_140087640(local_4410,&local_7348);
            FUN_140085090(local_5350,uVar19);
            FUN_140085440(local_4410);
            cVar3 = FUN_140088800(local_5350);
            if (cVar3 != '\0') {
              local_6f48 = FUN_140086000(local_5350);
              FUN_140032400(&local_71b8,&local_6f48);
            }
            FUN_140085440(local_5350);
          }
          FUN_140030dd0(local_72c8);
          cVar3 = FUN_14000ff10(local_72c8,local_7240);
        }
        FUN_14000ef10(local_1ea8,1);
        FUN_14000c990(local_1e98,"-op steamscreenshot");
        if (local_71b8 != puStack_71b0) {
          FUN_14000c990(local_1e98," -workshopids ");
          puVar2 = puStack_71b0;
          for (puVar25 = local_71b8; puVar25 != puVar2; puVar25 = puVar25 + 1) {
            uVar19 = FUN_140031fc0(local_1e98,*puVar25);
            FUN_14000c990(uVar19,&DAT_1404752c0);
          }
        }
        FUN_140083010(local_f18);
        uVar19 = FUN_14000ee70(local_1ea8,local_2568);
        uVar19 = FUN_14001b9c0(local_3bd8,uVar19);
        uVar19 = FUN_140017110(uVar19);
        FUN_1400832c0(local_f18,"bin/wallpaperui.exe",uVar19,0);
        thunk_FUN_140017240(local_3bd8);
        FUN_1400844b0(local_f18,3000,0);
        FUN_140083230(local_f18);
        FUN_1400056d0(local_1ea8);
        FUN_14000d9e0(&local_71b8);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c5c:
        uVar19 = FUN_140097640(&DAT_1404e6d80,local_3bb8,"var_url_faq");
        pWVar13 = (LPCWSTR)FUN_140005c70(uVar19);
        ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,pWVar13,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
        thunk_FUN_140016770(local_3bb8);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c5d:
        FUN_1400679b0(&DAT_1404e52e0);
        uVar19 = FUN_140065bb0(&DAT_1404e52e0,local_20d8);
        FUN_140019f60(uVar19);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c5f:
        bVar5 = FUN_1400191c0(&DAT_1404e52e0);
        FUN_14006ed70(&DAT_1404e52e0,bVar5 ^ 1);
        FUN_140021e00(local_res10);
        return 0;
      case 0x9c60:
        cVar3 = FUN_1400182c0(&DAT_1404e64d0);
        if (cVar3 != '\0') {
          FUN_140084550(&DAT_1404e64d0);
          FUN_140018220(local_4b20,0x83);
          FUN_1400182d0(&DAT_1404e64d0,local_4b20);
          FUN_1400182b0(local_4b20);
          FUN_140021e00(local_res10);
          return 0;
        }
      case 0x9c61:
        PostMessageW(param_1,0x111,0x9c59,4);
        FUN_140021e00(local_res10);
        return 0;
      }
    }
    if ((0x88c5 < uVar34) && (uVar34 < 0x8cae)) {
      FUN_140084dd0(local_5ec8,0);
      iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
      if (iVar10 != 0) {
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"playlists",local_5ec8);
        cVar3 = FUN_1400888a0(local_5ec8);
        if (cVar3 != '\0') {
          uVar36 = FUN_1400863a0(local_5ec8);
          if (uVar35 - 0x88c6 < uVar36) {
            uVar19 = thunk_FUN_140086540(local_5ec8,uVar35 - 0x88c6);
            FUN_140085090(local_4050,uVar19);
            lVar22 = FUN_140130820(0);
            cVar3 = FUN_14001d3c0(local_4050,lVar22 + 0x18,1);
            if (cVar3 != '\0') {
              cVar3 = FUN_140019190(&DAT_1404e52e0);
              if (cVar3 != '\0') {
                FUN_14006eaf0(&DAT_1404e52e0,0);
              }
              FUN_140021e00(local_res10);
              FUN_140018220(local_4ca0,0x68);
              FUN_140021e50(param_1,0x401,0,local_4ca0);
              FUN_1400182b0(local_4ca0);
            }
            FUN_140085440(local_4050);
          }
        }
      }
      FUN_140085440(local_5ec8);
      FUN_140021e00(local_res10);
      return 0;
    }
    if ((ushort)(uVar34 + 0x7352) < 1000) {
      FUN_140084dd0(local_5e78,0);
      iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
      if (iVar10 != 0) {
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"profiles",local_5e78);
        cVar3 = FUN_1400888a0(local_5e78);
        if (cVar3 != '\0') {
          uVar36 = FUN_1400863a0(local_5e78);
          if (uVar35 - 0x8cae < uVar36) {
            uVar19 = thunk_FUN_140086540(local_5e78,uVar35 - 0x8cae);
            FUN_140085090(local_43c0,uVar19);
            FUN_14001dc40(local_43c0);
            FUN_140021e00(local_res10);
            FUN_140018220(local_4cc0,0x68);
            FUN_140021e50(param_1,0x401,0,local_4cc0);
            FUN_1400182b0(local_4cc0);
            FUN_140085440(local_43c0);
          }
        }
      }
      FUN_140085440(local_5e78);
LAB_1400273a2:
      FUN_140021e00(local_res10);
      return 0;
    }
    FUN_140021e00(local_res10);
    goto switchD_140021f8c_caseD_3;
  }
  if (param_2 != 0x113) {
    if (param_2 != 0x218) {
      if (param_2 != 0x2b1) goto switchD_140021f8c_caseD_3;
      if ((DAT_1404df540 & 0x200) == 0) {
        FUN_140021dd0(&local_7336);
        if (param_3 != 3) {
          if (param_3 == 4) {
            DAT_1404df540 = DAT_1404df540 & 0xffffffdf;
            FUN_140084dd0(local_5580,0);
            FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfig",local_5580);
            FUN_14006a490(&DAT_1404e52e0,local_5580);
            FUN_140085440(local_5580);
            FUN_140021e00(&local_7336);
            return 0;
          }
          if (param_3 == 5) {
            FUN_14001d320(param_1,5000);
          }
          else {
            if (param_3 == 7) {
              FUN_140084dd0(local_5b50,0);
              FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5b50);
              puVar18 = (undefined4 *)FUN_1400170d0(local_2cd8,"extremesleephack");
              local_7348 = *puVar18;
              uStack_7344 = puVar18[1];
              uStack_7340 = puVar18[2];
              uStack_733c = puVar18[3];
              uVar19 = FUN_140087640(local_5b50,&local_7348);
              cVar3 = FUN_1400886d0(uVar19);
              if ((cVar3 != '\0') && (cVar3 = FUN_140086300(uVar19), cVar3 != '\0')) {
                PostMessageW(param_1,0x12,0,0);
                FUN_140085440(local_5b50);
                FUN_140021e00(&local_7336);
                return 0;
              }
              cVar3 = FUN_140019190(&DAT_1404e52e0);
              if (cVar3 == '\0') {
                DAT_1404df540 = DAT_1404df540 | 0x40;
                FUN_14006eaf0(&DAT_1404e52e0,1);
              }
              FUN_140085440(local_5b50);
              FUN_140021e00(&local_7336);
              return 0;
            }
            if (param_3 != 8) goto LAB_140023d16;
            PostMessageW(param_1,0x408,0,0);
          }
          FUN_14001df90();
          PostMessageW(param_1,0x411,0,0);
          FUN_140021e00(&local_7336);
          return 0;
        }
        DAT_1404df540 = DAT_1404df540 | 0x20;
        FUN_1400666c0(&DAT_1404e52e0);
LAB_140023d16:
        FUN_140021e00(&local_7336);
        return 0;
      }
      if ((DAT_1404dfbb2 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbb2 = '\0';
      goto LAB_140021ee4;
    }
    if (param_3 == 0x8013) {
      cVar3 = FUN_14003a770(param_4,&DAT_140426e98);
      if ((cVar3 != '\0') || (cVar3 = FUN_14003a770(param_4,&DAT_140426eb8), cVar3 != '\0')) {
        cVar3 = (char)param_4[5];
        if ((DAT_1404df540 >> 1 & 1) == (uint)(cVar3 != '\0')) {
          if (cVar3 != '\0') {
            DAT_1404df540 = DAT_1404df540 | 2;
            return 0;
          }
        }
        else {
          if (cVar3 != '\0') {
            FUN_14006ed90(&DAT_1404e52e0,0);
            FUN_14001d360(param_1);
            DAT_1404df540 = DAT_1404df540 | 2;
            return 0;
          }
          FUN_14006ed90(&DAT_1404e52e0,CONCAT71((uint7)(uint3)(DAT_1404df540 >> 8),1));
        }
        DAT_1404df540 = DAT_1404df540 & 0xfffffffd;
        return 0;
      }
      cVar3 = FUN_14003a770(param_4,&DAT_140426ea8);
      if (cVar3 != '\0') {
        bVar39 = (char)param_4[5] != '\0';
        cVar3 = FUN_140019160(&DAT_1404e52e0,0x10);
        if ((bool)cVar3 != bVar39) {
          FUN_1400605f0(&DAT_1404e52e0,0x10,bVar39);
          PostMessageW(param_1,0x113,0x68,0);
          return 0;
        }
      }
    }
    goto switchD_140021f8c_caseD_1;
  }
  switch(param_3) {
  case 0x69:
    KillTimer(param_1,0x69);
    FUN_14006e6d0(&DAT_1404e52e0);
    DAT_1404df540 = DAT_1404df540 & 0xffffffef;
    break;
  case 0x6a:
    KillTimer(DAT_1404e5280,0x6a);
  case 0x68:
    if ((DAT_1404df540 & 0x204) != 0) {
      if ((DAT_1404dfbe6 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe6 = 0;
      return 0;
    }
    FUN_140021dd0(&local_7338);
    if ((param_4 != (int *)0x1092) &&
       (cVar3 = FUN_140019160(&DAT_1404e52e0,0x400000), cVar3 != '\0')) {
      local_7314 = 0;
      BVar7 = SystemParametersInfoW(0x72,0,&local_7314,0);
      if ((BVar7 == 0) || (local_7314 == 0)) {
        FUN_140019180(&DAT_1404e52e0,0x400000);
      }
    }
    uVar4 = FUN_1400182c0(&DAT_1404e64d0);
    FUN_14006cea0(&DAT_1404e52e0,param_4 != (int *)0x1092,uVar4);
    if (param_4 != (int *)0x1092) {
      FUN_140021e00(&local_7338);
      FUN_140084700(&DAT_1404e64d0);
      FUN_140084700(&DAT_1404e6a70);
      FUN_140084700(&DAT_1404e67a0);
      FUN_140021e20(&local_7338);
      if ((DAT_1404df540 & 0x60) == 0) {
        cVar3 = FUN_14003cb30();
        if (cVar3 == '\0') {
          lVar22 = FUN_14006edd0(&DAT_1404e52e0);
          if (lVar22 != 0) {
            FUN_14006eef0(&DAT_1404e52e0,0);
            FUN_140070690(&DAT_1404e52e0,0);
          }
          FUN_1400666c0(&DAT_1404e52e0);
          DAT_1404e52a0 = (HWND)0x0;
          cVar3 = FUN_14003c840();
          if (cVar3 == '\0') {
            if (DAT_1404e7e89 == '\x01') {
              DAT_1404e7e89 = '\x02';
              uVar19 = FUN_140097640(&DAT_1404e6d80,local_3d98,"core_msgboxtitle_error");
              pWVar13 = (LPCWSTR)FUN_140005c70(uVar19);
              uVar19 = FUN_140097640(&DAT_1404e6d80,local_3db8,
                                     "core_msgbox_prompt_high_contrast_was_enabled");
              pWVar14 = (LPCWSTR)FUN_140005c70(uVar19);
              MessageBoxW((HWND)0x0,pWVar14,pWVar13,0x1010);
              thunk_FUN_140016770(local_3db8);
              thunk_FUN_140016770(local_3d98);
            }
          }
          else {
            cVar3 = FUN_14003cb30();
            if ((cVar3 != '\0') && (cVar3 = FUN_1400191b0(&DAT_1404e52e0), cVar3 == '\0')) {
              FUN_1400191e0(&DAT_1404e52e0);
              FUN_14001b080();
              cVar3 = FUN_140015010();
              if (cVar3 != '\0') {
                ShowWindow(DAT_1404e5298,0);
                ShowWindow(DAT_1404e5298,4);
              }
            }
          }
        }
        BVar7 = IsWindow(DAT_1404e52a0);
        if (BVar7 != 0) {
          local_6ee8.left = 0;
          local_6ee8.top = 0;
          local_6ee8.right = 0;
          local_6ee8.bottom = 0;
          BVar7 = GetWindowRect(DAT_1404e52a0,&local_6ee8);
          if ((BVar7 != 0) && (iVar10 = memcmp(&local_6ee8,&DAT_1404e8bb8,0x10), iVar10 != 0)) {
            _DAT_1404e8bb8 = local_6ee8.left;
            LRam00000001404e8bbc = local_6ee8.top;
            LRam00000001404e8bc0 = local_6ee8.right;
            LRam00000001404e8bc4 = local_6ee8.bottom;
            FUN_14001d160();
          }
        }
        if (((DAT_1404df540 & 0x100) != 0) && (cVar3 = FUN_1400191b0(&DAT_1404e52e0), cVar3 == '\0')
           ) {
          FUN_14001b080();
        }
        if ((((DAT_1404df540 & 0xc000) != 0) &&
            (cVar3 = FUN_140019160(&DAT_1404e52e0,0x10000), cVar3 != '\0')) &&
           (cVar3 = FUN_1400182c0(&DAT_1404e64d0), cVar3 == '\0')) {
          FUN_140019180(&DAT_1404e52e0,0x10000);
          FUN_14001dce0();
        }
      }
    }
    FUN_140021e00(&local_7338);
    return 0;
  default:
    if (((DAT_1404df540 & 0x200) == 0) && (param_3 - 10000 < 0xfe)) {
      FUN_140021dd0(&local_732d);
      uVar19 = FUN_140019210(&DAT_1404e52e0);
      FUN_140056140(uVar19,uVar35 - 0x10);
      FUN_140021e00(&local_732d);
      return 0;
    }
    goto switchD_140021f8c_caseD_3;
  case 0x6c:
    KillTimer(param_1,0x6c);
    FUN_14001d160();
    cVar3 = FUN_14012e700();
    if (cVar3 != '\0') {
      SetTimer(param_1,0x6d,5000,(TIMERPROC)0x0);
      return 0;
    }
    goto switchD_140021f8c_caseD_1;
  case 0x6d:
    FUN_14001d160();
    cVar3 = FUN_14012e700();
    if (cVar3 == '\0') {
      KillTimer(param_1,0x6d);
      return 0;
    }
    goto switchD_140021f8c_caseD_1;
  case 0x6e:
    KillTimer(param_1,0x6e);
    bVar5 = FUN_140139480();
    if (bVar5 != ((byte)(DAT_1404df540 >> 10) & 1)) {
      if (bVar5 == 0) {
        uVar35 = DAT_1404df540 & 0xfffffbff;
      }
      else {
        uVar35 = DAT_1404df540 | 0x400;
      }
      DAT_1404df540 = uVar35;
      if ((uVar35 & 1) == 0) {
        local_1ba8[0]._4_4_ = 0;
        FUN_1404217a0(&local_1ba8[0].uCallbackMessage,0,0x318);
        local_17f4 = 0;
        uStack_17ec = 0;
        local_1ba8[0].cbSize = 0x3d0;
        local_1ba8[0].hWnd = DAT_1404e5278;
        local_1ba8[0].uID = 1000;
        local_1874 = 0;
        uStack_186c = 0;
        local_1ba8[0].uFlags = 2;
        local_1864 = 0;
        uStack_185c = 0;
        local_1878 = 4;
        local_1854 = 0;
        uStack_184c = 0;
        local_1844 = 0;
        uStack_183c = 0;
        local_1834 = 0;
        uStack_182c = 0;
        local_1824 = 0;
        uStack_181c = 0;
        local_1814 = 0;
        uStack_180c = 0;
        local_1804 = 0;
        uStack_17fc = 0;
        uStack_17e8 = 0;
        uStack_17e4 = 0;
        uStack_17e0 = 0;
        local_1ba8[0].hIcon = (HICON)FUN_14001dfe0((byte)(uVar35 >> 10) & 1);
        Shell_NotifyIconW(1,local_1ba8);
        DestroyIcon(local_1ba8[0].hIcon);
        return 0;
      }
    }
    goto switchD_140021f8c_caseD_1;
  case 0x6f:
    KillTimer(param_1,0x6f);
    FUN_14001d160();
    break;
  case 0x70:
    KillTimer(param_1,0x70);
    cVar3 = FUN_14001e1a0();
    if (cVar3 == '\0') goto LAB_14002424e;
    goto switchD_140021f8c_caseD_1;
  case 0x71:
    KillTimer(param_1,0x71);
    BVar7 = IsWindowVisible(param_1);
    if (BVar7 != 0) {
      ShowWindow(param_1,0);
      return 0;
    }
    goto switchD_140021f8c_caseD_1;
  case 0x72:
    KillTimer(param_1,0x72);
    FUN_140019340();
    break;
  case 0x73:
    if ((DAT_1404df540 & 0x204) == 0) {
      FUN_140021dd0(&local_7331);
      KillTimer(param_1,0x73);
      if ((DAT_1404df540 >> 0xb & 1) != 0) {
        DAT_1404df540 = DAT_1404df540 & 0xfffff7ff;
        uVar19 = FUN_140019210(&DAT_1404e52e0);
        FUN_140055320(uVar19,1);
      }
      uVar19 = FUN_140019210(&DAT_1404e52e0);
      FUN_1400569d0(uVar19,"ledextensions","logon",0,0);
      FUN_140021e00(&local_7331);
    }
    else {
      if ((DAT_1404dfbe4 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe4 = '\0';
    }
    break;
  case 0x74:
    if ((DAT_1404df540 & 0x200) == 0) {
      FUN_140021dd0(&local_732f);
      KillTimer(param_1,0x74);
      FUN_14006eef0(&DAT_1404e52e0,1);
      FUN_140021e00(&local_732f);
    }
    else {
      if ((DAT_1404dfbe2 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe2 = '\0';
    }
    break;
  case 0x75:
    iVar10 = FUN_1401307f0();
    if (0 < iVar10) {
      if ((DAT_1404df540 & 0x204) != 0) {
        if ((DAT_1404dfbe3 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
          DebugBreak();
        }
        DAT_1404dfbe3 = 0;
        return 0;
      }
      FUN_140021dd0(&local_7330);
      KillTimer(param_1,0x75);
      if (((DAT_1404df540 & 0xc000) != 0) && (BVar7 = IsWindow(DAT_1404e52a0), BVar7 != 0)) {
        if (((DAT_1404df540 & 0x60) == 0) &&
           ((cVar3 = FUN_1400191b0(&DAT_1404e52e0), cVar3 == '\0' &&
            (iVar10 = SHGetFolderPathW(0,0x1a,0,0,local_848), -1 < iVar10)))) {
          FUN_140018ab0(local_6500,local_848);
          FUN_140005d20(local_6500,"Microsoft/Windows/Themes/WallpaperEngineOverride.jpg");
          FUN_140018ab0(local_6520,local_848);
          FUN_140005d20(local_6520,"Microsoft/Windows/Themes/WallpaperEngineLockOverride.jpg");
          bVar39 = (DAT_1404df540 >> 0xf & 1) != 0;
          uVar20 = uVar15;
          if (bVar39) {
            uVar19 = FUN_140018ce0(local_6520,local_3d58);
            uVar20 = FUN_140017110(uVar19);
          }
          bVar38 = (DAT_1404df540 >> 0xe & 1) != 0;
          if (bVar38) {
            uVar19 = FUN_140018ce0(local_6500,local_3d78);
            uVar15 = FUN_140017110(uVar19);
          }
          FUN_140072190(&DAT_1404e52e0,uVar15,uVar20);
          if (bVar38) {
            thunk_FUN_140017240(local_3d78);
          }
          if (bVar39) {
            thunk_FUN_140017240(local_3d58);
          }
          FUN_14000dd70(local_4ac0,L"winrtutil64.exe");
          uVar19 = FUN_140005790(local_3d38,local_4ac0);
          FUN_14002fd20(local_4ae0,&DAT_140474db0,uVar19);
          thunk_FUN_140017240(local_3d38);
          thunk_FUN_140016770(local_4ac0);
          FUN_140083010(&local_15b8);
          FUN_14000ef10(local_1fa8,1);
          if ((DAT_1404df540 >> 0x10 & 1) != 0) {
            FUN_14000c990(local_1f98," -vdesktopenabled");
          }
          if ((DAT_1404df540 >> 0xe & 1) != 0) {
            uVar19 = FUN_14000c990(local_1f98," -setwallpaper \"");
            uVar31 = FUN_140018ce0(local_6500,local_3cf8);
            uVar31 = FUN_140018960(local_3d18,uVar31,0x2f);
            uVar19 = FUN_14000cbc0(uVar19,uVar31);
            FUN_14000c990(uVar19,"\" -setwallpaperstyle 22");
            thunk_FUN_140017240(local_3d18);
            thunk_FUN_140017240(local_3cf8);
          }
          if ((DAT_1404df540 >> 0xf & 1) != 0) {
            uVar19 = FUN_14000c990(local_1f98," -setlockscreen \"");
            uVar31 = FUN_140018ce0(local_6520,local_3cb8);
            uVar31 = FUN_140018960(local_3cd8,uVar31,0x2f);
            uVar19 = FUN_14000cbc0(uVar19,uVar31);
            FUN_14000c990(uVar19,&DAT_140474de4);
            thunk_FUN_140017240(local_3cd8);
            thunk_FUN_140017240(local_3cb8);
          }
          uVar19 = FUN_14000ee70(local_1fa8,local_3c98);
          uVar19 = FUN_140017110(uVar19);
          uVar31 = FUN_140017110(local_4ae0);
          FUN_1400832c0(&local_15b8,uVar31,uVar19,0);
          thunk_FUN_140017240(local_3c98);
          FUN_1400844b0(&local_15b8,5000,0);
          FUN_140081800(local_1548);
          if (local_15b0 != -1) {
            FUN_140084a90(&local_15b8);
          }
          if (local_15b8 != (HANDLE)0xffffffffffffffff) {
            CloseHandle(local_15b8);
            local_15b8 = (HANDLE)0xffffffffffffffff;
          }
          FUN_1400056d0(local_1fa8);
          FUN_140083230(&local_15b8);
          thunk_FUN_140017240(local_4ae0);
          thunk_FUN_140016770(local_6520);
          thunk_FUN_140016770(local_6500);
          FUN_140021e00(&local_7330);
          return 0;
        }
        FUN_14001dce0();
      }
      FUN_140021e00(&local_7330);
      return 0;
    }
    goto switchD_140021f8c_caseD_1;
  case 0x76:
    KillTimer(param_1,0x76);
    hWnd = FindWindowW(L"WPEEventWindowSC",(LPCWSTR)0x0);
    BVar7 = IsWindow(hWnd);
    if (BVar7 != 0) {
      PostMessageW(hWnd,0x412,0,0);
      return 0;
    }
    goto switchD_140021f8c_caseD_1;
  case 0x77:
    KillTimer(param_1,0x77);
    break;
  case 0x78:
    iVar10 = FUN_14001e530(0);
    if (iVar10 == 0) {
      KillTimer(param_1,0x78);
      FUN_14001b080();
      return 0;
    }
switchD_140021f8c_caseD_1:
    break;
  case 0x79:
    if ((DAT_1404df540 & 0x204) == 0) {
      FUN_140021dd0(&local_7332);
      KillTimer(DAT_1404e5280,0x79);
      FUN_14006eef0(&DAT_1404e52e0,0);
      FUN_140070690(&DAT_1404e52e0,0);
      iVar10 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver");
      if (iVar10 != 0) {
        FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
        FUN_140084dd0(local_5558,0);
        FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,PTR_s_wallpaperconfig_1404df5a0,local_5558);
        FUN_1400191e0(&DAT_1404e52e0);
        FUN_14006a490(&DAT_1404e52e0,local_5558);
        FUN_14006edd0(&DAT_1404e52e0);
        cVar3 = FUN_1400182c0(&DAT_1404e64d0);
        if (cVar3 != '\0') {
          FUN_14001cc50(0);
        }
        FUN_140085440(local_5558);
      }
      FUN_140021e00(&local_7332);
    }
    else {
      if ((DAT_1404dfbe5 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe5 = '\0';
    }
    break;
  case 0x7a:
    KillTimer(param_1,0x7a);
    FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
    break;
  case 0x7b:
    if ((DAT_1404df540 & 0x200) == 0) {
      FUN_140021dd0(&local_732e);
      KillTimer(param_1,0x7b);
      uVar19 = FUN_14012e6e0();
      FUN_140085090(local_3fb0,uVar19);
      FUN_140084dd0(local_5ac0,0);
      FUN_140046530(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5ac0);
      puVar18 = (undefined4 *)FUN_1400170d0(local_2cc8,"monitormap");
      local_7348 = *puVar18;
      uStack_7344 = puVar18[1];
      uStack_7340 = puVar18[2];
      uStack_733c = puVar18[3];
      uVar19 = FUN_140087640(local_5ac0,&local_7348);
      FUN_140085520(uVar19,local_3fb0);
      FUN_1400465c0(&PTR_s_wallpaperconfig_1404df5a0,&DAT_1404737fc,local_5ac0);
      FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
      cVar3 = FUN_1400182c0(&DAT_1404e64d0);
      if (cVar3 != '\0') {
        FUN_14001cc50(1);
      }
      FUN_140085440(local_5ac0);
      FUN_140085440(local_3fb0);
      FUN_140021e00(&local_732e);
    }
    else {
      if ((DAT_1404dfbe1 != '\0') && (BVar7 = IsDebuggerPresent(), BVar7 != 0)) {
        DebugBreak();
      }
      DAT_1404dfbe1 = '\0';
    }
  }
  return 0;
}

