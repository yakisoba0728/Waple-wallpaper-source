// Function: FUN_140085090
// Addr: 140085090
// Size: 659 bytes


longlong * FUN_140085090(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_res8;
  
  param_1[2] = 0;
  *(char *)(param_1 + 1) = (char)param_2[1];
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 & 0xfffffeff;
  switch(uVar2 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    *param_1 = *param_2;
    break;
  case 4:
    puVar5 = (undefined4 *)*param_2;
    if ((puVar5 != (undefined4 *)0x0) && ((*(uint *)(param_2 + 1) >> 8 & 1) != 0)) {
      puVar5 = (undefined4 *)FUN_140084b30(puVar5 + 1,*puVar5);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x100;
    }
    *param_1 = (longlong)puVar5;
    break;
  case 6:
  case 7:
    plVar6 = (longlong *)FUN_14028af20(0x10);
    plVar10 = (longlong *)*param_2;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar7 = (longlong *)FUN_14028af20(0x58);
    *plVar7 = (longlong)plVar7;
    plVar7[1] = (longlong)plVar7;
    plVar7[2] = (longlong)plVar7;
    *(undefined2 *)(plVar7 + 3) = 0x101;
    *plVar6 = (longlong)plVar7;
    puVar3 = *(undefined8 **)(*plVar10 + 8);
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      plVar8 = (longlong *)FUN_14028af20(0x58);
      FUN_140084bf0(plVar8 + 4,puVar3 + 4);
      FUN_140085090(plVar8 + 6,puVar3 + 6);
      *plVar8 = (longlong)plVar7;
      plVar8[2] = (longlong)plVar7;
      *(undefined2 *)(plVar8 + 3) = 0;
      plVar8[1] = (longlong)plVar7;
      *(undefined1 *)(plVar8 + 3) = *(undefined1 *)(puVar3 + 3);
      lVar9 = FUN_140089830(plVar6,*puVar3,plVar8);
      *plVar8 = lVar9;
      lVar9 = FUN_140089830(plVar6,puVar3[2],plVar8);
      plVar8[2] = lVar9;
      plVar7 = plVar8;
    }
    *(longlong **)(*plVar6 + 8) = plVar7;
    plVar7 = (longlong *)*plVar6;
    plVar6[1] = plVar10[1];
    plVar10 = (longlong *)plVar7[1];
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar10 + 0x19);
      while (cVar1 == '\0') {
        plVar10 = (longlong *)*plVar10;
        cVar1 = *(char *)(*plVar10 + 0x19);
      }
      *plVar7 = (longlong)plVar10;
      lVar9 = *(longlong *)(*plVar6 + 8);
      cVar1 = *(char *)(*(longlong *)(lVar9 + 0x10) + 0x19);
      while (cVar1 == '\0') {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        cVar1 = *(char *)(*(longlong *)(lVar9 + 0x10) + 0x19);
      }
      *(longlong *)(*plVar6 + 0x10) = lVar9;
      *param_1 = (longlong)plVar6;
    }
    else {
      *plVar7 = (longlong)plVar7;
      *(longlong *)(*plVar6 + 0x10) = *plVar6;
      *param_1 = (longlong)plVar6;
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x41f);
  }
  plVar10 = (longlong *)FUN_140088ca0(&local_res8,param_2 + 2);
  lVar9 = *plVar10;
  *plVar10 = 0;
  lVar4 = param_1[2];
  param_1[2] = lVar9;
  if (lVar4 != 0) {
    FUN_140017240(lVar4 + 0x40);
    FUN_140017240(lVar4 + 0x20);
    FUN_140017240(lVar4);
    thunk_FUN_14028af80(lVar4,0x60);
  }
  if (local_res8 != 0) {
    FUN_140017240(local_res8 + 0x40);
    FUN_140017240(local_res8 + 0x20);
    FUN_140017240(local_res8);
    thunk_FUN_14028af80(local_res8,0x60);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

