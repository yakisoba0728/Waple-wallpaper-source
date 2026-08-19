// Function: FUN_1404bb0bc
// Addr: 1404bb0bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb0bc(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *in_RAX;
  undefined7 uVar10;
  char unaff_BH;
  char *unaff_RSI;
  char in_CF;
  uint *puVar9;
  
  *unaff_RSI = *unaff_RSI + (char)param_1 + in_CF;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = *param_4;
  bVar5 = (byte)in_RAX;
  *param_4 = *param_4 + bVar5;
  bVar2 = *(byte *)((longlong)in_RAX * 2);
  bVar4 = bVar5 + *(byte *)((longlong)in_RAX * 2);
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar6 = bVar4 + CARRY1(bVar1,bVar5);
  cVar3 = unaff_RSI[(longlong)param_1];
  uVar8 = (uint)CONCAT71(uVar10,cVar6 + *(char *)CONCAT71(uVar10,cVar6));
  uVar7 = uVar8 + 0x70000d34;
  puVar9 = (uint *)(ulonglong)uVar7;
  *param_1 = *param_1 + (char)(uVar7 >> 8) + (0x8ffff2cb < uVar8);
  unaff_RSI[-0x7ffdef0] = unaff_RSI[-0x7ffdef0] + unaff_BH;
  *param_4 = *param_4;
  *(char *)puVar9 = (char)*puVar9 + (char)uVar7;
  *(char *)(puVar9 + 4) =
       (char)puVar9[4] +
       (char)((ulonglong)param_2 >> 8) + cVar3 +
       (CARRY1(bVar5,bVar2) || CARRY1(bVar4,CARRY1(bVar1,bVar5)));
  *puVar9 = *puVar9 & uVar7;
  *param_4 = *param_4;
  uVar8 = uVar8 + 0xe4050d36;
  uVar7 = CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 | *(byte *)(ulonglong)uVar8);
  bRam000000016583b127 = bRam000000016583b127 ^ (byte)(uVar8 >> 8);
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 & uVar7;
  uVar7 = (int)&stack0x00000000 + 0x2221004b;
  *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

