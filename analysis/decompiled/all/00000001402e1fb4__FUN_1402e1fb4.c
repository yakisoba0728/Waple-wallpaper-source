// Function: FUN_1402e1fb4
// Addr: 1402e1fb4
// Size: 241 bytes


void FUN_1402e1fb4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int local_res8;
  undefined4 local_res10;
  int local_res18;
  
  puVar3 = (undefined8 *)func_0x0001402e16bc();
  puVar4 = (undefined8 *)FUN_1402e16c4();
  iVar8 = 0;
  uVar7 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_1402e172c();
  if (((iVar1 == 0) && (iVar1 = FUN_1402e16cc(), iVar1 == 0)) &&
     (iVar1 = FUN_1402e16fc(), iVar1 == 0)) {
    FUN_1402d9110(DAT_1404e4e80);
    DAT_1404e4e80 = 0;
    iVar1 = (*DAT_140426420)(&DAT_1404e4ea0);
    if (iVar1 != -1) {
      local_res8 = DAT_1404e4ea0 * 0x3c;
      DAT_1404e4e90 = 1;
      if (DAT_1404e4ee6 != 0) {
        local_res8 = DAT_1404e4ef4 * 0x3c + local_res8;
      }
      if ((DAT_1404e4f3a != 0) && (iRam00000001404e4f48 != 0)) {
        iVar8 = (iRam00000001404e4f48 - DAT_1404e4ef4) * 0x3c;
        uVar7 = 1;
      }
      func_0x000140421870(*puVar4,0,0x80);
      func_0x000140421870(puVar4[1],0,0x80);
      func_0x000140421870(*puVar3,0,0x40);
      func_0x000140421870(puVar3[1],0,0x40);
      uVar2 = func_0x0001402d5c20();
      func_0x0001402e2254(0x1404e4ea4,*puVar4,*puVar3,uVar2);
      func_0x0001402e2254(0x1404e4ef8,puVar4[1],puVar3[1],uVar2);
      local_res10 = uVar7;
      local_res18 = iVar8;
    }
    piVar5 = (int *)func_0x0001402e16b4();
    *piVar5 = local_res8;
    puVar6 = (undefined4 *)func_0x0001402e16a4();
    *puVar6 = local_res10;
    piVar5 = (int *)func_0x0001402e16ac();
    *piVar5 = local_res18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

