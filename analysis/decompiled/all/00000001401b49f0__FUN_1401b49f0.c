// Function: FUN_1401b49f0
// Addr: 1401b49f0
// Size: 318 bytes


ulonglong FUN_1401b49f0(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,
                       longlong param_5)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  
  pbVar4 = param_3;
  if (param_5 != 0) {
    while (pbVar6 = pbVar4, puVar8 = local_38, pbVar4 != param_4) {
      do {
        if (puVar8 == local_34) break;
        bVar1 = *pbVar6;
        uVar2 = (uint)bVar1;
        if (bVar1 < 0x80) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          if (bVar1 < 0xc0) goto LAB_1401b4b13;
          if (bVar1 < 0xe0) {
            uVar2 = uVar2 & 0x1f;
            iVar7 = 1;
          }
          else if (bVar1 < 0xf0) {
            uVar2 = uVar2 & 0xf;
            iVar7 = 2;
          }
          else if (bVar1 < 0xf8) {
            uVar2 = uVar2 & 7;
            iVar7 = 3;
          }
          else {
            uVar2 = uVar2 & 3;
            iVar7 = 5 - (uint)(bVar1 < 0xfc);
          }
          if ((longlong)param_4 - (longlong)pbVar6 < (longlong)(ulonglong)(iVar7 + 1)) break;
          pbVar6 = pbVar6 + 1;
          do {
            if (0x3f < (byte)(*pbVar6 + 0x80)) goto LAB_1401b4b13;
            uVar2 = *pbVar6 & 0x3f | uVar2 << 6;
            iVar7 = iVar7 + -1;
            pbVar6 = pbVar6 + 1;
          } while (0 < iVar7);
        }
        if (*param_2 == '\0') {
          *param_2 = '\x01';
        }
        if (0x10ffff < uVar2) goto LAB_1401b4b13;
        puVar8 = puVar8 + 4;
      } while (pbVar6 != param_4);
      if (pbVar4 == pbVar6) break;
      lVar3 = param_5 + -1;
      if (puVar8 != local_34) {
        lVar3 = param_5;
      }
      param_5 = lVar3;
      pbVar4 = pbVar6;
      if (lVar3 == 0) break;
    }
  }
LAB_1401b4b13:
  uVar5 = (longlong)pbVar4 - (longlong)param_3 & 0xffffffff;
  if (0x7fffffff < (longlong)pbVar4 - (longlong)param_3) {
    uVar5 = 0x7fffffff;
  }
  return uVar5;
}

