// Function: FUN_1403d3950
// Addr: 1403d3950
// Size: 674 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403d3950(undefined8 param_1,uint *param_2,undefined4 param_3,longlong param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  ulonglong local_88;
  undefined4 local_78;
  undefined8 local_70;
  LPCRITICAL_SECTION local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  local_70 = param_5;
  local_78 = param_3;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  local_68 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_2 + 0xc);
  iVar5 = FUN_1402f12d0(lVar1,param_3,*param_2 | 0x1100000);
  if (iVar5 == 0) {
    lVar1 = *(longlong *)(lVar1 + 0x78);
    if (*(int *)(lVar1 + 0x60) == 0x6f75746c) {
      local_90 = param_8;
      local_98 = param_7;
      local_a0 = param_6;
      local_a8 = param_5;
      cVar4 = FUN_1403d32d0(param_1,param_2,param_3,param_4);
      if (cVar4 != '\0') {
        uVar7 = 1;
        goto LAB_1403d3bc1;
      }
    }
    else if (*(int *)(lVar1 + 0x60) == 0x62697473) {
      uVar7 = 0;
      if ((*(char *)(lVar1 + 0x82) != '\a') ||
         (*(int *)(lVar1 + 0x70) != *(int *)(lVar1 + 0x6c) << 2)) goto LAB_1403d3bc1;
      LeaveCriticalSection(lpCriticalSection);
      uVar8 = *(int *)(lVar1 + 0x70) * *(int *)(lVar1 + 0x68);
      if ((uVar8 == 0) || (0x7fffffff < uVar8)) {
LAB_1403d3b39:
        piVar6 = (int *)&DAT_14045dd10;
      }
      else {
        uVar2 = *(undefined8 *)(lVar1 + 0x78);
        piVar6 = (int *)_calloc_base(1,0x30);
        if (piVar6 == (int *)0x0) goto LAB_1403d3b39;
        *(undefined2 *)((longlong)piVar6 + 5) = 0;
        *(undefined1 *)((longlong)piVar6 + 7) = 0;
        *piVar6 = 0;
        *(undefined1 *)(piVar6 + 1) = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        piVar6[8] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        piVar6[0xb] = 0;
        *piVar6 = 1;
        *(undefined1 *)(piVar6 + 1) = 1;
        piVar6[2] = 0;
        piVar6[3] = 0;
        *(undefined8 *)(piVar6 + 4) = uVar2;
        piVar6[6] = uVar8;
        piVar6[8] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        piVar6[0xb] = 0;
        piVar6[7] = 1;
        cVar4 = FUN_14040ed10(piVar6);
        if (cVar4 == '\0') {
          if (*piVar6 != 0) {
            LOCK();
            iVar5 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              *piVar6 = -0xdead;
              lVar3 = *(longlong *)(piVar6 + 2);
              if (lVar3 != 0) {
                FUN_1403c3220(lVar3);
                thunk_FUN_1402d9040(lVar3);
                piVar6[2] = 0;
                piVar6[3] = 0;
              }
              if (*(code **)(piVar6 + 10) != (code *)0x0) {
                (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
                piVar6[8] = 0;
                piVar6[9] = 0;
                piVar6[10] = 0;
                piVar6[0xb] = 0;
              }
              thunk_FUN_1402d9040(piVar6);
            }
          }
          goto LAB_1403d3b39;
        }
      }
      iVar5 = FUN_1403c99a0(param_1,local_78,local_60,0);
      if (iVar5 != 0) {
        if (*(longlong *)(param_4 + 0x98) != 0) {
          uVar7 = *(ulonglong *)(*(longlong *)(param_4 + 0x98) + 0x48);
        }
        local_90 = local_60;
        local_98 = 0;
        local_a0 = 0x42475241;
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar1 + 0x68));
        local_88 = uVar7;
        iVar5 = (**(code **)(param_4 + 0x58))(param_4,local_70,piVar6,*(undefined4 *)(lVar1 + 0x6c))
        ;
        uVar7 = (ulonglong)(iVar5 != 0);
      }
      FUN_140414150(piVar6);
      EnterCriticalSection(lpCriticalSection);
      goto LAB_1403d3bc1;
    }
  }
  uVar7 = 0;
LAB_1403d3bc1:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar7;
}

