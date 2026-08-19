// Function: FUN_1400f3a00
// Addr: 1400f3a00
// Size: 842 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f3a00(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  char cVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  undefined8 local_res8 [4];
  
  (*DAT_140426b18)(1);
  fVar6 = DAT_140492a14;
  fVar5 = DAT_1404929b0;
  fVar4 = DAT_140492938;
  fVar3 = DAT_140492928;
  fVar2 = DAT_14049274c;
  fVar1 = DAT_140492724;
  cVar11 = *(char *)(param_1 + 0x138);
  do {
    if (cVar11 == '\0') {
      (*_DAT_140426b10)(1);
      return;
    }
    iVar7 = func_0x000140290e50(param_1 + 0xd8);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      if ((*(char *)(param_1 + 0x90) == '\0') ||
         (*(int *)(param_1 + 0x60) + 0x1eU < *(uint *)(*(longlong *)(param_1 + 0x50) + 0x144))) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
      }
      cVar12 = *(char *)(param_1 + 0x91);
      if (cVar11 != cVar12) {
        cVar12 = cVar11;
        if (cVar11 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
          *(undefined1 *)(param_1 + 0x91) = 0;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
          *(char *)(param_1 + 0x91) = cVar11;
        }
      }
      if ((cVar12 != '\0') && (*(char *)(param_1 + 0x95) != '\0')) {
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
          fVar13 = (float)FUN_1400577f0(param_1 + 0x28);
          if (fVar1 <= fVar13) {
            fVar13 = fVar1;
          }
          dVar14 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
          if (0.0 < *(float *)(param_1 + 0x4c)) {
            fVar15 = *(float *)(param_1 + 0x4c) - fVar13;
            if (fVar15 <= 0.0) {
              fVar15 = 0.0;
            }
            *(float *)(param_1 + 0x4c) = fVar15;
            (*DAT_140426240)(1);
          }
          if (((fVar3 < *(float *)(param_1 + 0x4c) || fVar3 == *(float *)(param_1 + 0x4c)) ||
              (dVar14 <= 0.0)) || (dVar14 != *(double *)(param_1 + 0x40))) {
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          else {
            fVar13 = fVar13 + *(float *)(param_1 + 0x48);
            *(float *)(param_1 + 0x48) = fVar13;
            if (fVar2 < fVar13) {
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                        (*(longlong **)(param_1 + 0x58),0);
              (*DAT_140426240)(100);
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                        (*(longlong **)(param_1 + 0x58),SUB84(dVar14,0));
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x100))();
              fVar13 = *(float *)(param_1 + 0x4c);
              *(double *)(param_1 + 0x40) = dVar14;
              *(undefined4 *)(param_1 + 0x48) = 0;
              *(float *)(param_1 + 0x4c) = fVar13 + fVar13 + fVar4 + fVar13;
              goto LAB_1400f3cdb;
            }
          }
          *(double *)(param_1 + 0x40) = dVar14;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
LAB_1400f3cdb:
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
    FUN_140290f70(param_1 + 0xd8);
    if (*(char *)(param_1 + 0x138) != '\0') {
      fVar13 = *(float *)(param_1 + 0x70);
      fVar15 = fVar5;
      if (0.0 < fVar13) {
        fVar15 = fVar13 + fVar13;
      }
      uVar9 = (ulonglong)(fVar6 / (fVar15 * *(float *)(param_1 + 0x24)));
      uVar10 = 1;
      if (1 < (uint)uVar9) {
        uVar10 = uVar9 & 0xffffffff;
      }
      (*DAT_140426240)(uVar10);
    }
    cVar11 = *(char *)(param_1 + 0x138);
  } while( true );
}

