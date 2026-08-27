// Function: FUN_1403d2600
// Addr: 1403d2600
// Size: 740 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d2600(longlong param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  local_90 = 0;
  uStack_88 = 0;
  cVar3 = FUN_1402f0110(uVar1,param_3,1,&local_90);
  if (cVar3 == '\0') {
    local_b8 = local_a0;
    local_98 = 0;
    cVar3 = FUN_1402f00d0(uVar1,param_3,local_a4,local_a8);
    if (cVar3 == '\0') {
      FUN_14039db30(param_1,param_2);
      lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
      EnterCriticalSection(lpCriticalSection);
      lVar2 = *(longlong *)(param_2 + 0xc);
      if (*(char *)((longlong)param_2 + 6) == '\0') {
        fVar8 = (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
      }
      else {
        FUN_1402f0710(lVar2,&local_90,0);
        fVar8 = (float)local_90._4_4_ * (float)local_90._4_4_ +
                (float)(int)local_90 * (float)(int)local_90;
        if (fVar8 < 0.0) {
          fVar8 = (float)FUN_14041ad10();
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        fVar8 = fVar8 * DAT_1404925f0 *
                (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
        if ((float)uStack_88._4_4_ * (float)uStack_88._4_4_ +
            (float)(int)uStack_88 * (float)(int)uStack_88 < 0.0) {
          FUN_14041ad10();
        }
      }
      iVar4 = FUN_1402f12d0(lVar2,param_3,*param_2);
      bVar5 = iVar4 == 0;
      if (bVar5) {
        fVar8 = (float)FUN_14041a5c0((float)*(int *)(*(longlong *)(lVar2 + 0x78) + 0x38) * fVar8 +
                                     DAT_1404926c0);
        *param_4 = (int)fVar8;
        fVar6 = (float)FUN_14041a5c0();
        param_4[1] = (int)fVar6;
        fVar7 = (float)FUN_14041a5c0();
        param_4[2] = (int)(fVar7 - (float)(int)fVar8);
        fVar8 = (float)FUN_14041a5c0();
        param_4[3] = (int)(fVar8 - (float)(int)fVar6);
      }
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        return bVar5;
      }
      LeaveCriticalSection(lpCriticalSection);
      return bVar5;
    }
  }
  return false;
}

