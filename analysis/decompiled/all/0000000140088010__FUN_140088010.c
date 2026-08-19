// Function: FUN_140088010
// Addr: 140088010
// Size: 665 bytes


/* WARNING: Removing unreachable block (ram,0x00014008821e) */
/* WARNING: Removing unreachable block (ram,0x00014008822c) */
/* WARNING: Removing unreachable block (ram,0x00014008822f) */
/* WARNING: Removing unreachable block (ram,0x000140088236) */
/* WARNING: Removing unreachable block (ram,0x000140088254) */
/* WARNING: Removing unreachable block (ram,0x000140088267) */
/* WARNING: Removing unreachable block (ram,0x00014008826d) */
/* WARNING: Removing unreachable block (ram,0x0001400881c9) */
/* WARNING: Removing unreachable block (ram,0x0001400881dc) */
/* WARNING: Removing unreachable block (ram,0x0001400881de) */
/* WARNING: Removing unreachable block (ram,0x00014008830b) */
/* WARNING: Removing unreachable block (ram,0x000140088315) */

undefined8 FUN_140088010(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if ((char)param_1[1] != '\x06') {
    return 0;
  }
  puVar9 = *(undefined8 **)*param_1;
  cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
  puVar6 = (undefined8 *)puVar9[1];
  while (cVar1 == '\0') {
    if (puVar6[4] != 0) {
      uVar5 = func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                  L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
      return uVar5;
    }
    if (*(uint *)(puVar6 + 5) < param_2) {
      puVar7 = (undefined8 *)puVar6[2];
    }
    else {
      puVar7 = (undefined8 *)*puVar6;
      puVar9 = puVar6;
    }
    puVar6 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
  }
  if ((*(char *)((longlong)puVar9 + 0x19) != '\0') || (param_2 < *(uint *)(puVar9 + 5))) {
    puVar9 = *(undefined8 **)*param_1;
  }
  if (puVar9 == *(undefined8 **)*param_1) {
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      func_0x0001400856e0(param_3,puVar9 + 6);
    }
    iVar4 = func_0x000140086470(param_1);
    uVar11 = iVar4 - 1;
    while (param_2 < uVar11) {
      uVar5 = FUN_140086610(param_1,param_2 + 1);
      puVar9 = *(undefined8 **)*param_1;
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar6 = (undefined8 *)puVar9[1];
      while (cVar1 == '\0') {
        if (puVar6[4] != 0) {
          uVar5 = func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                                      L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146)
          ;
          return uVar5;
        }
        if (*(uint *)(puVar6 + 5) < param_2) {
          puVar7 = (undefined8 *)puVar6[2];
        }
        else {
          puVar7 = (undefined8 *)*puVar6;
          puVar9 = puVar6;
        }
        puVar6 = puVar7;
        cVar1 = *(char *)((longlong)puVar7 + 0x19);
      }
      if ((*(char *)((longlong)puVar9 + 0x19) != '\0') || (param_2 < *(uint *)(puVar9 + 5))) {
        if (((longlong *)*param_1)[1] != 0x2e8ba2e8ba2e8ba) {
          uVar5 = func_0x00014028aff0(0x58);
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14003a820();
      }
      FUN_1400855f0(puVar9 + 6,uVar5);
      param_2 = param_2 + 1;
    }
    plVar2 = (longlong *)*param_1;
    puVar9 = (undefined8 *)*plVar2;
    if (*(char *)((longlong)puVar9[1] + 0x19) == '\0') {
      uVar8 = uVar11 >> 2;
      puVar6 = (undefined8 *)puVar9[1];
      do {
        if (puVar6[4] == 0) {
          bVar12 = *(uint *)(puVar6 + 5) < uVar11;
code_r0x000140088398:
          if (!bVar12) goto code_r0x00014008839f;
code_r0x0001400883a7:
          puVar7 = (undefined8 *)puVar6[2];
        }
        else {
          uVar10 = *(uint *)(puVar6 + 5) >> 2;
          func_0x0001402cba34(L"this->cstr_ && other.cstr_",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
          uVar3 = uVar10;
          if (uVar8 < uVar10) {
            uVar3 = uVar8;
          }
          iVar4 = func_0x0001404210c0(puVar6[4],0,uVar3);
          if (iVar4 < 0) goto code_r0x0001400883a7;
          if (iVar4 < 1) {
            bVar12 = uVar10 < uVar8;
            goto code_r0x000140088398;
          }
code_r0x00014008839f:
          puVar7 = (undefined8 *)*puVar6;
          puVar9 = puVar6;
        }
        puVar6 = puVar7;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)puVar9 + 0x19) != '\0') || (uVar11 < *(uint *)(puVar9 + 5))) {
      puVar9 = (undefined8 *)*plVar2;
    }
    FUN_140089420(*param_1,puVar9);
    uVar5 = 1;
  }
  return uVar5;
}

