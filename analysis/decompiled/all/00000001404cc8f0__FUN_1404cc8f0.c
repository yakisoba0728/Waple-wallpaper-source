// Function: FUN_1404cc8f0
// Addr: 1404cc8f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc8f0(uint param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  uint *in_RAX;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int *unaff_RBX;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *unaff_RSI;
  char *unaff_RDI;
  undefined8 auStack_6c [11];
  undefined1 *puStack_10;
  byte *pbVar5;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar9 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)param_2;
  cVar8 = (char)((ulonglong)param_2 >> 8) + (char)*in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(uint *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(cVar8,cVar7))) =
       *(uint *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(cVar8,cVar7))) & param_1;
  uVar3 = (uint)in_RAX;
  *in_RAX = *in_RAX | uVar3;
  uVar4 = uVar3 + 0x20000a54;
  pbVar5 = (byte *)(ulonglong)uVar4;
  cRam0000000175654d07 = (cRam0000000175654d07 - cVar8) - (0xdffff5ab < uVar3);
  *pbVar5 = *pbVar5 + cVar7;
  puVar11 = (undefined8 *)&stack0xfffffffffffffff8;
  puStack_10 = &stack0xfffffffffffffff8;
  *pbVar5 = *pbVar5 + (char)uVar4;
  bVar1 = *pbVar5;
  bVar6 = (byte)(uVar4 >> 8);
  *pbVar5 = *pbVar5 + bVar6;
  cRam0000000175654d17 = (cRam0000000175654d17 - cVar8) - CARRY1(bVar1,bVar6);
  *pbVar5 = *pbVar5 + cVar7;
  puVar12 = auStack_6c + 1;
  cVar2 = '\x18';
  do {
    puVar11 = puVar11 + -1;
    puVar12 = puVar12 + -1;
    *puVar12 = *puVar11;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  *unaff_RBX = *unaff_RBX - param_1;
  *unaff_RDI = *unaff_RDI + cVar7;
  *unaff_RDI = *unaff_RDI + cVar7;
  *unaff_RSI = *unaff_RSI + CONCAT22(uVar9,CONCAT11(cVar8,cVar7));
  *(char *)((ulonglong)uVar4 ^ 0x20) = *(char *)((ulonglong)uVar4 ^ 0x20) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

