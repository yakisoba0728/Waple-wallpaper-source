// Function: FUN_1402e253c
// Addr: 1402e253c
// Size: 529 bytes


int FUN_1402e253c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong lVar8;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  *param_2 = 0;
  lVar5 = *param_1;
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  do {
    plVar3 = plStack_50;
    plVar4 = local_58;
    if (lVar5 == 0) {
      lVar5 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
      local_res18 = 0;
      for (plVar6 = local_58; plVar6 != plStack_50; plVar6 = plVar6 + 1) {
        lVar2 = -1;
        do {
          lVar2 = lVar2 + 1;
        } while (*(char *)(*plVar6 + lVar2) != '\0');
        local_res18 = local_res18 + 1 + lVar2;
      }
      lVar2 = FUN_1402d1280(lVar5,local_res18,1);
      if (lVar2 == 0) {
        FUN_1402d9110(0);
        for (plVar6 = plVar4; plVar6 != plVar3; plVar6 = plVar6 + 1) {
          FUN_1402d9110(*plVar6);
        }
        iVar1 = -1;
LAB_1402e268b:
        FUN_1402d9110(plVar4);
      }
      else {
        lVar5 = lVar2 + lVar5 * 8;
        local_res20 = lVar5;
        if (plVar4 != plVar3) {
          local_res10 = lVar2 - (longlong)plVar4;
          plVar6 = plVar4;
          do {
            lVar7 = -1;
            do {
              lVar8 = lVar7;
              lVar7 = lVar8 + 1;
            } while (*(char *)(*plVar6 + lVar7) != '\0');
            iVar1 = FUN_1402d9d40();
            if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            *(longlong *)(local_res10 + (longlong)plVar6) = lVar5;
            lVar5 = lVar5 + lVar8 + 2;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar3);
        }
        *param_2 = lVar2;
        FUN_1402d9110(0);
        for (plVar6 = plVar4; plVar6 != plVar3; plVar6 = plVar6 + 1) {
          FUN_1402d9110(*plVar6);
        }
        FUN_1402d9110(plVar4);
        iVar1 = 0;
      }
      return iVar1;
    }
    local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
    lVar5 = FUN_1402eab80(lVar5,&local_res10);
    if (lVar5 == 0) {
      iVar1 = FUN_1402e2778(*param_1,0,0,&local_58);
      plVar4 = local_58;
      if (iVar1 != 0) {
        plVar3 = local_58;
        if (local_58 != plStack_50) {
          do {
            FUN_1402d9110(*plVar3);
            plVar3 = plVar3 + 1;
          } while (plVar3 != plStack_50);
        }
        goto LAB_1402e268b;
      }
    }
    else {
      iVar1 = FUN_1402e28fc(*param_1,lVar5,&local_58);
      plVar4 = local_58;
      if (iVar1 != 0) {
        plVar3 = local_58;
        if (local_58 != plStack_50) {
          do {
            FUN_1402d9110(*plVar3);
            plVar3 = plVar3 + 1;
          } while (plVar3 != plStack_50);
        }
        goto LAB_1402e268b;
      }
    }
    param_1 = param_1 + 1;
    lVar5 = *param_1;
  } while( true );
}

