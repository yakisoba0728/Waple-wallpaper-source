// Function: FUN_1402e1ee4
// Addr: 1402e1ee4
// Size: 391 bytes


void FUN_1402e1ee4(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int local_res8;
  undefined4 local_res10;
  int local_res18;
  
  puVar4 = (undefined8 *)FUN_1402e15ec();
  puVar5 = (undefined8 *)FUN_1402e15f4();
  iVar9 = 0;
  uVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_1402e165c();
  if (((iVar1 == 0) && (iVar1 = FUN_1402e15fc(), iVar1 == 0)) &&
     (iVar1 = FUN_1402e162c(), iVar1 == 0)) {
    FUN_1402d9040(DAT_1404e4db0);
    DAT_1404e4db0 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1404e4dd0);
    if (DVar2 != 0xffffffff) {
      local_res8 = DAT_1404e4dd0 * 0x3c;
      DAT_1404e4dc0 = 1;
      if (DAT_1404e4e16 != 0) {
        local_res8 = DAT_1404e4e24 * 0x3c + local_res8;
      }
      if ((DAT_1404e4e6a != 0) && (DAT_1404e4e78 != 0)) {
        iVar9 = (DAT_1404e4e78 - DAT_1404e4e24) * 0x3c;
        uVar8 = 1;
      }
      FUN_1404217a0(*puVar5,0,0x80);
      FUN_1404217a0(puVar5[1],0,0x80);
      FUN_1404217a0(*puVar4,0,0x40);
      FUN_1404217a0(puVar4[1],0,0x40);
      uVar3 = FUN_1402d5b50();
      FUN_1402e2184(&DAT_1404e4dd4,*puVar5,*puVar4,uVar3);
      FUN_1402e2184(&DAT_1404e4e28,puVar5[1],puVar4[1],uVar3);
      local_res10 = uVar8;
      local_res18 = iVar9;
    }
    piVar6 = (int *)FUN_1402e15e4();
    *piVar6 = local_res8;
    puVar7 = (undefined4 *)FUN_1402e15d4();
    *puVar7 = local_res10;
    piVar6 = (int *)FUN_1402e15dc();
    *piVar6 = local_res18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

