// Function: FUN_140417950
// Addr: 140417950
// Size: 272 bytes


undefined8 FUN_140417950(longlong param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 local_48 [2];
  longlong local_40;
  uint *local_38;
  int local_30;
  undefined1 local_2c;
  
  lVar7 = param_1 + 0x140;
  lVar2 = FUN_1403c4f70(lVar7);
  if (param_2 < *(uint *)(lVar2 + 8)) {
    local_2c = param_5 != 0;
    local_48[0] = 0;
    local_40 = param_1;
    local_38 = param_3;
    local_30 = param_4;
    puVar3 = (undefined8 *)FUN_1403c4f70(lVar7);
    puVar9 = &DAT_14045dd10;
    puVar4 = &DAT_14045dd10;
    if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar3;
    }
    if (3 < *(uint *)(puVar4 + 3)) {
      puVar9 = (undefined8 *)puVar4[2];
    }
    uVar5 = FUN_1403cbf00(puVar9,param_2);
    uVar6 = FUN_1403c4f70(lVar7);
    lVar7 = FUN_1403c5c00(uVar6,param_2);
    if ((lVar7 != 0) && (local_30 != 0)) {
      uVar10 = 0;
      do {
        if ((*(ulonglong *)(lVar7 + uVar10 * 8) >>
             (*local_38 >> ((byte)(&DAT_14045c3c8)[uVar10] & 0x1f) & 0x3f) & 1) == 0) {
          return 0;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < 3);
      cVar1 = FUN_140375830(uVar5,local_48);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

