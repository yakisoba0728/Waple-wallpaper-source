// Function: FUN_1404138e0
// Addr: 1404138e0
// Size: 331 bytes


undefined8 FUN_1404138e0(longlong param_1,uint *param_2,int param_3,longlong param_4)

{
  ushort *puVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  undefined4 local_68 [2];
  longlong local_60;
  uint *local_58;
  int local_50;
  undefined1 local_4c;
  
  puVar11 = *(ushort **)(param_1 + 8);
  puVar1 = puVar11 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  do {
    if (puVar11 == puVar1) {
      return 0;
    }
    cVar3 = *(char *)(param_1 + 0x18);
    uVar2 = *puVar11;
    lVar4 = FUN_1403c4f70(param_4 + 0x140);
    if ((uint)uVar2 < *(uint *)(lVar4 + 8)) {
      local_4c = cVar3 != '\0';
      local_68[0] = 0;
      local_60 = param_4;
      local_58 = param_2;
      local_50 = param_3;
      puVar5 = (undefined8 *)FUN_1403c4f70(param_4 + 0x140);
      puVar6 = &DAT_14045dd10;
      if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar5;
      }
      puVar5 = &DAT_14045dd10;
      if (3 < *(uint *)(puVar6 + 3)) {
        puVar5 = (undefined8 *)puVar6[2];
      }
      uVar7 = FUN_1403cbf00(puVar5,(uint)uVar2);
      uVar8 = FUN_1403c4f70(param_4 + 0x140);
      lVar4 = FUN_1403c5c00(uVar8);
      if ((lVar4 != 0) && (local_50 != 0)) {
        uVar10 = 0;
        do {
          if ((*(ulonglong *)(lVar4 + uVar10 * 8) >>
               (*local_58 >> ((byte)(&DAT_14045c3c8)[uVar10] & 0x1f) & 0x3f) & 1) == 0)
          goto LAB_140413a07;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < 3);
        cVar3 = FUN_140375830(uVar7,local_68);
        if (cVar3 != '\0') {
          return 1;
        }
      }
    }
LAB_140413a07:
    puVar11 = puVar11 + 6;
  } while( true );
}

