// Function: FUN_140153200
// Addr: 140153200
// Size: 1126 bytes


longlong FUN_140153200(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *local_78;
  uint local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_140085090();
  uVar6 = *(uint *)(param_3 + 1) & 0xff;
  cVar5 = (char)*(uint *)(param_3 + 1);
  if (uVar6 == 7) {
    if (*(char *)(param_1 + 8) == cVar5) {
      plVar9 = *(longlong **)*param_3;
      plVar3 = (longlong *)*plVar9;
      while (plVar3 != plVar9) {
        pcVar1 = (char *)plVar3[4];
        sVar11 = strlen(pcVar1);
        lVar10 = FUN_140086de0(param_3,pcVar1,pcVar1 + sVar11);
        if (*(char *)(lVar10 + 8) != '\0') {
          pcVar1 = (char *)plVar3[4];
          sVar11 = strlen(pcVar1);
          uVar12 = FUN_140086de0(param_3,pcVar1,pcVar1 + sVar11);
          pcVar1 = (char *)plVar3[4];
          sVar11 = strlen(pcVar1);
          uVar13 = FUN_140086de0(param_2,pcVar1,pcVar1 + sVar11);
          uVar12 = FUN_140153200(&local_78,uVar13,uVar12);
          pcVar1 = (char *)plVar3[4];
          sVar11 = strlen(pcVar1);
          uVar13 = FUN_140086de0(param_1,pcVar1,pcVar1 + sVar11);
          FUN_140085610(uVar13,uVar12);
          FUN_140085440(&local_78);
        }
        plVar2 = (longlong *)plVar3[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar2 + 0x19);
          plVar3 = plVar2;
          while (cVar5 == '\0') {
            plVar3 = (longlong *)*plVar3;
            cVar5 = *(char *)(*plVar3 + 0x19);
          }
        }
        else {
          cVar5 = *(char *)(plVar3[1] + 0x19);
          plVar4 = (longlong *)plVar3[1];
          plVar2 = plVar3;
          while ((plVar3 = plVar4, cVar5 == '\0' && (plVar2 == (longlong *)plVar3[2]))) {
            cVar5 = *(char *)(plVar3[1] + 0x19);
            plVar4 = (longlong *)plVar3[1];
            plVar2 = plVar3;
          }
        }
      }
    }
    else {
      local_70 = CONCAT31(local_70._1_3_,cVar5);
      local_70 = local_70 & 0xfffffeff;
      local_58 = 0;
      local_68 = 0;
      uStack_60 = 0;
      plVar9 = (longlong *)FUN_14028af20(0x10);
      *plVar9 = 0;
      plVar9[1] = 0;
      lVar10 = FUN_14028af20(0x58);
      *(longlong *)lVar10 = lVar10;
      *(longlong *)(lVar10 + 8) = lVar10;
      *(longlong *)(lVar10 + 0x10) = lVar10;
      *(undefined2 *)(lVar10 + 0x18) = 0x101;
      *plVar9 = lVar10;
      local_78 = plVar9;
      FUN_140085610(param_1,&local_78);
      plVar9 = local_78;
      switch((undefined1)local_70) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((local_70 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(local_78);
        }
        break;
      case 6:
      case 7:
        if (local_78 != (longlong *)0x0) {
          FUN_140088e40(local_78);
          thunk_FUN_14028af80(plVar9,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      lVar10 = local_68;
      if (local_68 != 0) {
        FUN_140017240(local_68 + 0x40);
        FUN_140017240(lVar10 + 0x20);
        FUN_140017240(lVar10);
        thunk_FUN_14028af80(lVar10,0x60);
      }
      plVar9 = *(longlong **)*param_3;
      plVar3 = (longlong *)*plVar9;
      while (plVar3 != plVar9) {
        pcVar1 = (char *)plVar3[4];
        sVar11 = strlen(pcVar1);
        lVar10 = FUN_140086de0(param_3,pcVar1,pcVar1 + sVar11);
        if (*(char *)(lVar10 + 8) != '\0') {
          pcVar1 = (char *)plVar3[4];
          sVar11 = strlen(pcVar1);
          uVar12 = FUN_140086de0(param_3,pcVar1,pcVar1 + sVar11);
          pcVar1 = (char *)plVar3[4];
          sVar11 = strlen(pcVar1);
          uVar13 = FUN_140086de0(param_1,pcVar1,pcVar1 + sVar11);
          FUN_140085520(uVar13,uVar12);
        }
        plVar2 = (longlong *)plVar3[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar2 + 0x19);
          while (plVar3 = plVar2, cVar5 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar5 = *(char *)(*plVar2 + 0x19);
          }
        }
        else {
          cVar5 = *(char *)(plVar3[1] + 0x19);
          plVar4 = (longlong *)plVar3[1];
          plVar2 = plVar3;
          while ((plVar3 = plVar4, cVar5 == '\0' && (plVar2 == (longlong *)plVar3[2]))) {
            cVar5 = *(char *)(plVar3[1] + 0x19);
            plVar4 = (longlong *)plVar3[1];
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  else if (uVar6 == 6) {
    uVar6 = 0;
    if (*(char *)(param_1 + 8) == cVar5) {
      iVar7 = FUN_1400863a0(param_3);
      if (iVar7 != 0) {
        do {
          lVar10 = FUN_140086540(param_3,uVar6);
          if (*(char *)(lVar10 + 8) != '\0') {
            uVar12 = FUN_140086540(param_3,uVar6);
            uVar13 = FUN_140086540(param_2,uVar6);
            uVar12 = FUN_140153200(&local_78,uVar13,uVar12);
            uVar13 = FUN_140086540(param_1,uVar6);
            FUN_140085610(uVar13,uVar12);
            FUN_140085440(&local_78);
          }
          uVar6 = uVar6 + 1;
          uVar8 = FUN_1400863a0(param_3);
        } while (uVar6 < uVar8);
      }
    }
    else {
      local_70 = CONCAT31(local_70._1_3_,cVar5);
      local_70 = local_70 & 0xfffffeff;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      plVar9 = (longlong *)FUN_14028af20(0x10);
      *plVar9 = 0;
      plVar9[1] = 0;
      lVar10 = FUN_14028af20(0x58);
      *(longlong *)lVar10 = lVar10;
      *(longlong *)(lVar10 + 8) = lVar10;
      *(longlong *)(lVar10 + 0x10) = lVar10;
      *(undefined2 *)(lVar10 + 0x18) = 0x101;
      *plVar9 = lVar10;
      local_78 = plVar9;
      FUN_140085610(param_1,&local_78);
      FUN_140085440(&local_78);
      iVar7 = FUN_1400863a0(param_3);
      if (iVar7 != 0) {
        do {
          lVar10 = FUN_140086540(param_3,uVar6);
          if (*(char *)(lVar10 + 8) != '\0') {
            uVar12 = FUN_140086540(param_3,uVar6);
            uVar13 = FUN_140086540(param_1,uVar6);
            FUN_140085520(uVar13,uVar12);
          }
          uVar6 = uVar6 + 1;
          uVar8 = FUN_1400863a0(param_3);
        } while (uVar6 < uVar8);
      }
    }
  }
  else {
    FUN_140085520(param_1,param_3);
  }
  return param_1;
}

