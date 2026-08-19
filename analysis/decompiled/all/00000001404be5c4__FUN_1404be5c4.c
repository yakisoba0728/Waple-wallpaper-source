// Function: FUN_1404be5c4
// Addr: 1404be5c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be5c4(char *param_1,undefined8 param_2)

{
  char cVar1;
  byte *in_RAX;
  char *pcVar2;
  char unaff_SPL;
  longlong unaff_RBP;
  
  uRam00000001a450e5cc = uRam00000001a450e5cc & (uint)in_RAX;
  cVar1 = ((byte)in_RAX | *in_RAX) + 0x25;
  *(char *)(unaff_RBP + -0x23ffda30) =
       *(char *)(unaff_RBP + -0x23ffda30) + (char)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)(ulonglong)(uint)(int)(short)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[-0x4affda30] = pcVar2[-0x4affda30] + cVar1;
  cRam000000018ae4c1e7 = cRam000000018ae4c1e7 << 1;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

