// Function: FUN_1404be5b0
// Addr: 1404be5b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be5b0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar4;
  char unaff_SPL;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  *param_1 = *param_1 & (byte)in_RAX;
  uVar3 = *in_RAX;
  uVar1 = *in_RAX;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  uVar3 = ((uint)in_RAX - uVar1) + (uint)((uint)in_RAX < uVar3) + 0x75e513f2;
  cVar2 = ((byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x25;
  *(char *)(unaff_RBP + -0x23ffda30) =
       *(char *)(unaff_RBP + -0x23ffda30) + (char)((ulonglong)param_2 >> 8);
  pcVar4 = (char *)(ulonglong)(uint)(int)(short)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x4affda30] = pcVar4[-0x4affda30] + cVar2;
  cRam000000018ae4c1e7 = cRam000000018ae4c1e7 << 1;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

