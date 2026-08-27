// Function: FUN_14022f430
// Addr: 14022f430
// Size: 383 bytes


void FUN_14022f430(longlong param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x28)) {
    uVar1 = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)(param_1 + 0x41) = 0;
    fVar8 = DAT_14049267c;
    if (*(uint *)(param_1 + 0x18) < 500) {
      fVar8 = DAT_140492644;
    }
    if (0.0 < *(float *)(param_1 + 0x28)) {
      do {
        FUN_140236cd0(param_1,fVar8,1);
        fVar7 = fVar7 + fVar8;
      } while (fVar7 < *(float *)(param_1 + 0x28));
    }
    *(undefined1 *)(param_1 + 0x41) = uVar1;
    if ((*(short *)(param_1 + 0x248) != 0) && (*(longlong *)(param_1 + 0x230) != 0)) {
      uVar4 = 0;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x340) != 0) {
        do {
          iVar6 = 0;
          lVar5 = (longlong)(int)uVar4;
          *(undefined2 *)(*(longlong *)(param_1 + 0x238) + lVar5 * 2) = 1;
          uVar2 = *(ushort *)(param_1 + 0x248);
          if (uVar2 != 0) {
            do {
              uVar3 = (iVar6 + uVar2 * uVar4) * 3;
              iVar6 = iVar6 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 0x230) + (ulonglong)uVar3 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + lVar5 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x230) + (ulonglong)(uVar3 + 1) * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + lVar5 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x230) + (ulonglong)(uVar3 + 2) * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar5 * 4);
            } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x248));
          }
          uVar3 = *(uint *)(param_1 + 0x340);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      if (*(longlong *)(param_1 + 0x240) != 0) {
        FUN_1404217a0(*(longlong *)(param_1 + 0x240),0,(ulonglong)uVar3 * 2);
      }
    }
  }
  return;
}

