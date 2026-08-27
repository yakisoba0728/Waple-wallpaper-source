// Function: FUN_1400f3930
// Addr: 1400f3930
// Size: 962 bytes


void FUN_1400f3930(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  DWORD dwMilliseconds;
  char cVar10;
  char cVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 local_res8 [4];
  
  timeBeginPeriod(1);
  fVar6 = DAT_140492944;
  fVar5 = DAT_1404928e0;
  fVar4 = DAT_140492868;
  fVar3 = DAT_140492858;
  fVar2 = DAT_14049267c;
  fVar1 = DAT_140492654;
  cVar10 = *(char *)(param_1 + 0x138);
  do {
    if (cVar10 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001400f3ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      timeEndPeriod(1);
      return;
    }
    iVar7 = FUN_140290d80(param_1 + 0xd8);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      if ((*(char *)(param_1 + 0x90) == '\0') ||
         (*(int *)(param_1 + 0x60) + 0x1eU < *(uint *)(*(longlong *)(param_1 + 0x50) + 0x144))) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      cVar11 = *(char *)(param_1 + 0x91);
      if (cVar10 != cVar11) {
        cVar11 = cVar10;
        if (cVar10 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
          *(undefined1 *)(param_1 + 0x91) = 0;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
          *(char *)(param_1 + 0x91) = cVar10;
        }
      }
      if ((cVar11 != '\0') && (*(char *)(param_1 + 0x95) != '\0')) {
        LOCK();
        *(undefined1 *)(param_1 + 0x95) = 0;
        UNLOCK();
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))(*(longlong **)(param_1 + 0x58),0);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
      }
      if ((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x91) == '\0')) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        local_res8[0] = 0;
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x160))
                          (*(longlong **)(param_1 + 0x58),local_res8);
        iVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xa0))();
        if ((iVar8 == 0) &&
           (iVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xd8))(), iVar8 == 0)) {
          fVar12 = (float)FUN_140057720(param_1 + 0x28);
          if (fVar1 <= fVar12) {
            fVar12 = fVar1;
          }
          dVar13 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
          if (0.0 < *(float *)(param_1 + 0x4c)) {
            fVar14 = *(float *)(param_1 + 0x4c) - fVar12;
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            *(float *)(param_1 + 0x4c) = fVar14;
            Sleep(1);
          }
          if (((fVar3 < *(float *)(param_1 + 0x4c) || fVar3 == *(float *)(param_1 + 0x4c)) ||
              (dVar13 <= 0.0)) || (dVar13 != *(double *)(param_1 + 0x40))) {
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          else {
            fVar12 = fVar12 + *(float *)(param_1 + 0x48);
            *(float *)(param_1 + 0x48) = fVar12;
            if (fVar2 < fVar12) {
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                        (*(longlong **)(param_1 + 0x58),0);
              Sleep(100);
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                        (*(longlong **)(param_1 + 0x58),SUB84(dVar13,0));
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
              fVar12 = *(float *)(param_1 + 0x4c);
              *(double *)(param_1 + 0x40) = dVar13;
              *(undefined4 *)(param_1 + 0x48) = 0;
              *(float *)(param_1 + 0x4c) = fVar12 + fVar12 + fVar4 + fVar12;
              goto LAB_1400f3c0b;
            }
          }
          *(double *)(param_1 + 0x40) = dVar13;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
LAB_1400f3c0b:
        if (iVar7 == 0) {
          LOCK();
          *(undefined1 *)(param_1 + 200) = 1;
          UNLOCK();
          LOCK();
          *(undefined1 *)(param_1 + 0xc9) = 1;
          UNLOCK();
        }
      }
    }
    FUN_140290ea0(param_1 + 0xd8);
    if (*(char *)(param_1 + 0x138) != '\0') {
      fVar12 = *(float *)(param_1 + 0x70);
      fVar14 = fVar5;
      if (0.0 < fVar12) {
        fVar14 = fVar12 + fVar12;
      }
      uVar9 = (uint)(longlong)(fVar6 / (fVar14 * *(float *)(param_1 + 0x24)));
      dwMilliseconds = 1;
      if (1 < uVar9) {
        dwMilliseconds = uVar9;
      }
      Sleep(dwMilliseconds);
    }
    cVar10 = *(char *)(param_1 + 0x138);
  } while( true );
}

