// Function: FUN_140071dd0
// Addr: 140071dd0
// Size: 542 bytes


void FUN_140071dd0(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_38 [8];
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = (local_30 >> 8 & 0xfffffe) << 8;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar7 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar8 = FUN_140087490(uVar7,&DAT_1404737fc,&DAT_140473800);
  if (lVar8 != 0) {
    uVar7 = FUN_140086de0(uVar7,&DAT_1404737fc,&DAT_140473800);
    FUN_140085520(local_38,uVar7);
  }
  iVar6 = FUN_140290d80(&DAT_1404e6290);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404e62dc == 0x7fffffff) {
    DAT_1404e62dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar9 = (longlong *)*DAT_1404e6270;
  cVar1 = *(char *)((longlong)plVar9 + 0x19);
  while (cVar1 == '\0') {
    if ((longlong *)plVar9[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar9[9] + 0x10))();
    }
    plVar2 = (longlong *)plVar9[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar9 = plVar2;
      while (cVar1 == '\0') {
        plVar9 = (longlong *)*plVar9;
        cVar1 = *(char *)(*plVar9 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar9[1] + 0x19);
      plVar5 = (longlong *)plVar9[1];
      plVar2 = plVar9;
      while ((plVar9 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar5 = (longlong *)plVar9[1];
        plVar2 = plVar9;
      }
    }
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  }
  FUN_140290ea0(&DAT_1404e6290);
  FUN_1400567b0(&DAT_1404e6268,local_38);
  puVar4 = DAT_1404e5330;
  for (puVar3 = (undefined8 *)*DAT_1404e5330; puVar3 != puVar4; puVar3 = (undefined8 *)*puVar3) {
    lVar8 = puVar3[6];
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xa8) == *(longlong *)(lVar8 + 0xb0))) {
      plVar9 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[5]) {
        plVar9 = (longlong *)*plVar9;
      }
      FUN_1400638c0(&DAT_1404e6268,plVar9);
    }
  }
  if (7 < (byte)local_30) {
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar8 = local_28;
    if (local_28 == 0) {
      return;
    }
    FUN_140017240(local_28 + 0x40);
    FUN_140017240(lVar8 + 0x20);
    FUN_140017240(lVar8);
    thunk_FUN_14028af80(lVar8,0x60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140071f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140072028 + (ulonglong)(byte)local_30 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_140072028 + (ulonglong)(byte)local_30 * 4));
  return;
}

