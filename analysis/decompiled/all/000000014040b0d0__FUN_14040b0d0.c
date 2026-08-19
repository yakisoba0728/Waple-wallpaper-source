// Function: FUN_14040b0d0
// Addr: 14040b0d0
// Size: 245 bytes


ulonglong FUN_14040b0d0(undefined1 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                       uint param_5)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined2 local_48;
  
  lVar5 = func_0x000140386ed0(param_2,param_1);
  pbVar6 = (byte *)0x0;
  if (lVar5 != 0) {
    param_1[1] = (char)(param_3 & 0xffffffff);
    *param_1 = (char)((param_3 & 0xffffffff) >> 8);
    pbVar6 = (byte *)0x0;
    param_1[2] = (char)((uint)param_4 >> 8);
    param_1[3] = (char)param_4;
    if (*(int *)(param_2 + 0x2c) == 0) {
      pbVar1 = param_1 + 4;
      pbVar6 = param_1 + 6;
      if (pbVar1 <= pbVar6) {
        lVar5 = *(longlong *)(param_2 + 8);
        pbVar8 = pbVar1 + (2 - lVar5);
        if ((pbVar8 < (byte *)0x80000000) &&
           (pbVar6 = (byte *)(*(longlong *)(param_2 + 0x10) - lVar5),
           (longlong)pbVar8 <= (longlong)pbVar6)) {
          if ((int)pbVar8 != 0) {
            uVar7 = func_0x000140421870(lVar5,0,(ulonglong)pbVar8 & 0xffffffff);
            return uVar7;
          }
          lVar5 = *(longlong *)(param_2 + 8);
          pbVar6 = pbVar8 + lVar5;
          *(byte **)(param_2 + 8) = pbVar6;
          if ((lVar5 == 0) || (pbVar1 == (byte *)0x0)) goto LAB_14040b271;
          bVar3 = (byte)(param_5 >> 8);
          local_48 = CONCAT11((char)param_5,bVar3);
          *(undefined2 *)pbVar1 = local_48;
          uVar4 = (uint)bVar3 * 0x100 + (param_5 & 0xff);
          pbVar6 = (byte *)(ulonglong)uVar4;
          if (uVar4 != param_5) {
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
          }
          if (*(int *)(param_2 + 0x2c) != 0) goto LAB_14040b271;
          pbVar6 = (byte *)((ulonglong)(byte)param_1[5] + 1);
          if (pbVar1 + (longlong)(pbVar6 + (ulonglong)*pbVar1 * 0x100) * 2 < pbVar1)
          goto LAB_14040b271;
          lVar5 = *(longlong *)(param_2 + 8);
          uVar7 = (longlong)(pbVar1 + (longlong)(pbVar6 + (ulonglong)*pbVar1 * 0x100) * 2) - lVar5;
          if ((uVar7 < 0x80000000) &&
             (pbVar6 = (byte *)(*(longlong *)(param_2 + 0x10) - lVar5),
             (longlong)uVar7 <= (longlong)pbVar6)) {
            if ((int)uVar7 != 0) {
              func_0x000140421870(lVar5,0,uVar7 & 0xffffffff);
            }
            lVar5 = *(longlong *)(param_2 + 8);
            pbVar6 = (byte *)(lVar5 + uVar7);
            *(byte **)(param_2 + 8) = pbVar6;
            if (lVar5 != 0) {
              if ((param_1[3] & 0x10) != 0) {
                lVar5 = func_0x000140386a40(param_2,param_1);
                pbVar6 = (byte *)0x0;
                if (lVar5 == 0) goto LAB_14040b271;
                uVar2 = param_1[5];
                bVar3 = *pbVar1;
                pbVar6 = (byte *)0x0;
                param_1[(ulonglong)CONCAT11(bVar3,uVar2) * 2 + 6] = (char)((uint)param_4 >> 0x18);
                param_1[(ulonglong)CONCAT11(bVar3,uVar2) * 2 + 7] = (char)((uint)param_4 >> 0x10);
              }
              return CONCAT71((int7)((ulonglong)pbVar6 >> 8),1);
            }
            goto LAB_14040b271;
          }
        }
        *(undefined4 *)(param_2 + 0x2c) = 4;
      }
    }
  }
LAB_14040b271:
  return (ulonglong)pbVar6 & 0xffffffffffffff00;
}

