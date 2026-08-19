// Function: FUN_1404aa4a0
// Addr: 1404aa4a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa4a0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar6;
  undefined8 in_RAX;
  undefined6 uVar7;
  int *piVar5;
  char cVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = bVar6 * '\x02';
  cVar2 = (char)in_RAX + *(char *)CONCAT62(uVar7,CONCAT11(bVar3,(char)in_RAX)) + CARRY1(bVar6,bVar6)
  ;
  piVar5 = (int *)CONCAT62(uVar7,CONCAT11(bVar3 + (byte)param_2,cVar2));
  *piVar5 = *piVar5 + (uint)piVar5 + (uint)CARRY1(bVar3,(byte)param_2);
  uVar4 = (uint)piVar5 | 0xdf75e00;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + cVar8,unaff_BL)) + 0x521004a);
  *pcVar1 = *pcVar1 + (char)param_1;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2 + *(char *)(ulonglong)uVar4) + 0xb0000854U | 0xdf9fb00;
  pcVar1 = (char *)((ulonglong)uVar4 + 0x210049ea);
  *pcVar1 = *pcVar1 + cVar8;
  uVar4 = uVar4 + 0x64050002;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uRamf40500020521004a =
       CONCAT22((short)((uVar4 | 0xdfa0400) >> 0x10),
                CONCAT11((char)((uVar4 | 0xdfa0400) >> 8) * '\x02',(byte)uVar4));
  bVar3 = (((byte)uVar4 | *(byte *)(ulonglong)uRamf40500020521004a) - 6) + unaff_BH + cVar8;
  uVar4 = CONCAT31((int3)(uRamf40500020521004a >> 8),bVar3);
  uRam540500020521004a = uVar4 | 0xdfa0d00;
  *(byte *)(ulonglong)uRam540500020521004a = *(byte *)(ulonglong)uRam540500020521004a | bVar3;
  uVar4 = uVar4 | 0xdfadf00;
  pcVar1 = (char *)((ulonglong)uVar4 + 0x210049ea);
  *pcVar1 = *pcVar1 + cVar8;
  uVar4 = uVar4 + 0x64050002;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uVar4 = uVar4 | 0xdfadb00;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)(uVar4 >> 8);
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

