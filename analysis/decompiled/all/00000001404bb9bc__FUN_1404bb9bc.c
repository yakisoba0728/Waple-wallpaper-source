// Function: FUN_1404bb9bc
// Addr: 1404bb9bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb9bf) overlaps instruction at (ram,0x0001404bb9be)
    */

void FUN_1404bb9bc(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  uint *puVar4;
  char *pcVar6;
  char unaff_SPL;
  uint *unaff_RDI;
  undefined2 in_SS;
  char in_ZF;
  char *pcVar5;
  
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 != (char *)0x0 && in_ZF == '\0') {
    in_EAX = in((short)param_2);
    puVar4 = (uint *)(ulonglong)in_EAX;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)puVar4 = (char)*puVar4 + (char)in_EAX;
    *(char *)(puVar4 + -0x1b) = (char)puVar4[-0x1b] + (char)((ulonglong)param_2 >> 8);
    *puVar4 = *puVar4 & in_EAX;
    *(undefined2 *)(param_1 + 0x49eddfff) = in_SS;
    *pcVar6 = *pcVar6 + (char)in_EAX;
  }
  bVar2 = *param_4;
  *param_4 = *param_4 + (byte)in_EAX;
  uVar3 = (in_EAX - iRam00000001524cd4c7) - (uint)CARRY1(bVar2,(byte)in_EAX);
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = *pcVar5 + (char)param_2;
  if (pcVar6 == (char *)0x1 || *pcVar5 == '\0') {
    pbVar1 = (byte *)(pcVar5 + param_2 * 2);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    *pcVar5 = *pcVar5 + (char)uVar3;
    *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

