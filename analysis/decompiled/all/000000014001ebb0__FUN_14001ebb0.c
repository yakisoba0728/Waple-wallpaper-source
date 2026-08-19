// Function: FUN_14001ebb0
// Addr: 14001ebb0
// Size: 1048 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001ebb0(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  char local_228 [8];
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined **local_100;
  code *local_f8;
  undefined ***local_c8;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  longlong local_68 [7];
  longlong *local_30;
  
  iVar6 = 0;
  DAT_1404e81c8 = (*DAT_140426a80)(L"TaskbarCreated");
  (*DAT_140426a78)(DAT_1404e81c8,1);
  local_218 = 8;
  local_228[0] = s__service_140474ab0[0];
  local_228[1] = s__service_140474ab0[1];
  local_228[2] = s__service_140474ab0[2];
  local_228[3] = s__service_140474ab0[3];
  local_228[4] = s__service_140474ab0[4];
  local_228[5] = s__service_140474ab0[5];
  local_228[6] = s__service_140474ab0[6];
  local_228[7] = s__service_140474ab0[7];
  uStack_220 = 0;
  local_210 = 0xf;
  cVar1 = FUN_14000dcf0(0,local_228);
  local_218 = 0xd;
  local_210 = 0xf;
  local_228[0] = s__nowallpapers_140474028[0];
  local_228[1] = s__nowallpapers_140474028[1];
  local_228[2] = s__nowallpapers_140474028[2];
  local_228[3] = s__nowallpapers_140474028[3];
  local_228[4] = s__nowallpapers_140474028[4];
  local_228[5] = s__nowallpapers_140474028[5];
  local_228[6] = s__nowallpapers_140474028[6];
  local_228[7] = s__nowallpapers_140474028[7];
  uStack_220 = (ulonglong)CONCAT14(s__nowallpapers_140474028[0xc],s__nowallpapers_140474028._8_4_);
  cVar2 = FUN_14000dcf0(s__nowallpapers_140474028[0xc],local_228);
  local_c8 = &local_100;
  local_100 = &PTR_UNWIND_INFO_1400365cd_UnwindCodes_31__UnwindOpCode_140475488;
  local_f8 = FUN_14001e5c0;
  local_30 = (longlong *)0x0;
  if (local_c8 != (undefined ***)0x0) {
    local_30 = (longlong *)
               (*(code *)PTR_UNWIND_INFO_1400365cd_UnwindCodes_31__UnwindOpCode_140475488)
                         (local_c8,local_68);
  }
  uVar7 = func_0x000140033ad0(local_68,&DAT_1404e6500);
  if (local_30 != (longlong *)0x0) {
    uVar7 = (**(code **)(*local_30 + 0x20))
                      (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
  }
  if (local_c8 != (undefined ***)0x0) {
    uVar7 = (*(code *)(*local_c8)[4])
                      (local_c8,CONCAT71((int7)((ulonglong)&local_100 >> 8),local_c8 != &local_100))
    ;
  }
  if ((cVar1 == '\0' && cVar2 == '\0') && ((DAT_1404df610 & 0x2000) == 0)) {
    FUN_1400651e0(uVar7,1);
  }
  else {
    FUN_1400651e0(uVar7,0);
    if ((cVar1 != '\0') && (cVar2 == '\0')) {
      DAT_1404df610 = DAT_1404df610 | 0x800;
      goto LAB_14001ed37;
    }
  }
  DAT_1404df610 = DAT_1404df610 & 0xfffff7ff;
LAB_14001ed37:
  DAT_1404e8c50 = (*DAT_140426438)(0);
  local_b8 = 0;
  local_78 = L"WPEEventWindowSC";
  local_a8 = 0;
  uStack_a0 = 0;
  if ((DAT_1404df610 & 0x1000) == 0) {
    local_78 = L"WPEEventWindow";
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_b0 = FUN_140021f20;
  uVar3 = (*DAT_140426800)(&local_b8);
  DAT_1404df610 = DAT_1404df610 | 8;
  while (((DAT_1404e5350 == 0 && (iVar6 < 18000)) &&
         (DAT_1404e5350 = (*DAT_1404267d0)(0,uVar3,&DAT_140474608,0,0,0,0,0,0,0,DAT_1404e8c50,0),
         DAT_1404e5350 == 0))) {
    iVar6 = iVar6 + 1;
    (*DAT_140426240)();
  }
  DAT_1404df610 = DAT_1404df610 & 0xfffffff7;
  if (DAT_1404e5350 == 0) {
    FUN_140098830("Unable to create window\n");
    return;
  }
  (*DAT_140426b28)(DAT_1404e5350,0);
  puVar5 = &DAT_140426f68;
  if (7 < DAT_1404e5360) {
    puVar5 = &DAT_140426f88;
  }
  _DAT_1404e8c58 = (*DAT_140426a70)(DAT_1404e5350,puVar5,0);
  _DAT_1404e8c60 = (*DAT_140426a70)(DAT_1404e5350,&DAT_140426f78,0);
  _DAT_1404e8c68 = (*DAT_140426ae8)(0x8002,0x800b,0,0x14002fb70,0,0,2);
  _DAT_1404e8c70 = (*DAT_140426ae8)(0x21,0x22,0,FUN_14002fc40,0,0,2);
  _DAT_1404e63b0 = DAT_1404e5350;
  _DAT_1404e6628 = DAT_1404e5350;
  _DAT_1404e6bc8 = DAT_1404e5350;
  _DAT_1404e68f8 = DAT_1404e5350;
  iVar6 = (*DAT_140426aa8)(0x1000);
  uVar4 = DAT_1404df610 | 0x20;
  local_1c0 = 0;
  DAT_1404df610 = DAT_1404df610 & 0xffffffdf;
  if (iVar6 != 0) {
    DAT_1404df610 = uVar4;
  }
  local_1d8 = (local_1d8 >> 8 & 0xfffffe) << 8;
  local_1d0 = 0;
  uStack_1c8 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(&DAT_1404df6b8,"general","");
}

