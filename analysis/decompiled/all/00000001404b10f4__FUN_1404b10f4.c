// Function: FUN_1404b10f4
// Addr: 1404b10f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b10f4(char *param_1,undefined2 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar6;
  undefined8 in_RAX;
  uint *puVar5;
  byte bVar7;
  undefined6 uVar8;
  byte bVar9;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  bool in_PF;
  uint *puVar4;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  uVar2 = in(param_2);
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
  puVar5 = (uint *)((ulonglong)puVar4 & 0xffffffff);
  if (!in_PF) {
    puVar5 = (uint *)(ulonglong)*puVar4;
  }
  *puVar5 = *puVar5 & (uint)puVar5;
  uVar1 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + (byte)puVar5;
  iVar3 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),*unaff_RSI) + 0x15addb00 +
          (uint)!CARRY1((byte)uVar1,(byte)puVar5);
  cVar6 = (char)((uint)iVar3 >> 8) + bVar7;
  puVar4 = (uint *)(ulonglong)CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(cVar6,(char)iVar3));
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    puVar4 = (uint *)(ulonglong)*puVar4;
  }
  *puVar4 = *puVar4 & (uint)puVar4;
  *(char *)puVar4 = (char)*puVar4 + (char)puVar4;
  *param_1 = *param_1 + unaff_SPL;
  bVar9 = (byte)((ushort)param_2 >> 8);
  cVar6 = bVar7 + bVar9;
  *(char *)CONCAT62(uVar8,CONCAT11(cVar6,(char)param_1)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar6,(char)param_1)) +
       (char)((CONCAT31((int3)((uint)puVar4 + 0xc4050002 >> 8),unaff_RSI[1]) | 0x15aceb00) +
              0x4b0fd800 + (uint)CARRY1(bVar7,bVar9) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

