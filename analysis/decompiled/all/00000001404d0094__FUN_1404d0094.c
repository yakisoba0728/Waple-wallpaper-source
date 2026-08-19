// Function: FUN_1404d0094
// Addr: 1404d0094
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d001d) */

void FUN_1404d0094(char *param_1)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  uint *in_RAX;
  char unaff_BL;
  longlong unaff_RDI;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  cVar5 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar5;
  if (SCARRY1((char)uVar4,cVar5)) {
    *(char *)in_RAX = (char)*in_RAX + cVar5;
    pcVar2 = (char *)(unaff_RDI * 9 + 0x4c);
    *pcVar2 = *pcVar2 + unaff_BL;
    *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)param_1 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (uint *)(param_1 + -0x67ffc4);
  bVar3 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 << bVar3 | *puVar1 >> 0x20 - bVar3;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

