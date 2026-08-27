// Function: FUN_14025d1f0
// Addr: 14025d1f0
// Size: 267 bytes


void FUN_14025d1f0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((char)param_1[0x58] != '\x05') {
    return;
  }
  lVar8 = (longlong)(int)*(uint *)(param_1 + 0x59);
  if (*(uint *)(param_1 + 0x59) < 4) {
    if (((*(byte *)(param_1 + 0x24) & 1) == 0) ||
       ((param_1[0x30] != 0 && (cVar5 = FUN_140185010(), cVar5 == '\0')))) {
      lVar6 = param_1[0x19];
      *(undefined8 *)(lVar6 + 0x1258 + lVar8 * 0x10) = 0;
      *(undefined4 *)(lVar6 + 0x1260 + lVar8 * 0x10) = 0;
      *(undefined4 *)(lVar6 + 0x1264 + lVar8 * 0x10) = 0x3f800000;
    }
    else {
      fVar1 = *(float *)((longlong)param_1 + 0x2e4);
      lVar6 = param_1[0x19];
      fVar2 = *(float *)((longlong)param_1 + 0x2d4);
      lVar7 = param_1[0x5d];
      *(ulonglong *)(lVar6 + 0x1258 + lVar8 * 0x10) =
           CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2cc) >> 0x20) * fVar1,
                    (float)*(undefined8 *)((longlong)param_1 + 0x2cc) * fVar1);
      *(float *)(lVar6 + 0x1260 + lVar8 * 0x10) = fVar1 * fVar2;
      *(int *)(lVar6 + 0x1264 + lVar8 * 0x10) = (int)lVar7;
    }
    lVar6 = (**(code **)(*param_1 + 0x80))(param_1);
    lVar7 = (longlong)(int)param_1[0x59];
    uVar3 = *(undefined4 *)(lVar6 + 0x34);
    uVar4 = *(undefined4 *)(lVar6 + 0x38);
    lVar8 = param_1[0x19];
    *(undefined4 *)(lVar8 + 0x1228 + lVar7 * 0xc) = *(undefined4 *)(lVar6 + 0x30);
    *(undefined4 *)(lVar8 + 0x122c + lVar7 * 0xc) = uVar3;
    *(undefined4 *)(lVar8 + 0x1230 + lVar7 * 0xc) = uVar4;
    return;
  }
  return;
}

