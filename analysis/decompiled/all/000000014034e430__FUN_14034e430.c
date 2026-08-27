// Function: FUN_14034e430
// Addr: 14034e430
// Size: 440 bytes


int FUN_14034e430(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5,
                 int param_6)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  puVar10 = param_2 + 2;
  if (puVar10 <= param_3) {
    uVar8 = CONCAT11(*param_2,param_2[1]);
    if (puVar10 + (uint)uVar8 * 4 <= param_3) {
      lVar7 = *(longlong *)(param_1 + 0x18);
      iVar9 = 0;
      cVar1 = *(char *)(lVar7 + 0xc);
      cVar2 = *(char *)(lVar7 + 6);
      bVar3 = *(byte *)(lVar7 + 8);
      cVar4 = *(char *)(lVar7 + 10);
      cVar5 = *(char *)(lVar7 + 4);
      bVar6 = *(byte *)(lVar7 + 0xe);
      uVar11 = 0;
      if (uVar8 != 0) {
        do {
          iVar9 = FUN_14034e5f0(param_1,CONCAT11(*puVar10,puVar10[1]),(char)puVar10[2] + param_4,
                                (char)puVar10[3] + param_5,param_6 + 1,0);
          if (iVar9 != 0) break;
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar11 < uVar8);
      }
      *(short *)(*(longlong *)(param_1 + 0x18) + 4) = (short)cVar5;
      *(short *)(*(longlong *)(param_1 + 0x18) + 6) = (short)cVar2;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 8) = (ushort)bVar3;
      *(short *)(*(longlong *)(param_1 + 0x18) + 10) = (short)cVar4;
      *(short *)(*(longlong *)(param_1 + 0x18) + 0xc) = (short)cVar1;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe) = (ushort)bVar6;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 2) =
           (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 4);
      **(ushort **)(param_1 + 0x18) = (ushort)**(byte **)(param_1 + 0x10);
      return iVar9;
    }
  }
  return 3;
}

