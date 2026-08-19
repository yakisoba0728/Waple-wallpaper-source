// Function: FUN_1404d39b8
// Addr: 1404d39b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d39b8(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  char *in_RAX;
  byte unaff_BL;
  int unaff_ESI;
  longlong unaff_RDI;
  char *pcVar3;
  
  cRam00000001406e3a08 = cRam00000001406e3a08 + (char)((ulonglong)param_1 >> 8);
  cVar2 = (char)in_RAX + *in_RAX;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + (char)((ulonglong)param_2 >> 8);
  *(undefined1 *)(unaff_RDI * 2) = *(undefined1 *)(unaff_RDI * 2);
  cRam21004a2d00003f38 = cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3[-0x5dffc0cc] = pcVar3[-0x5dffc0cc] + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *(int *)(param_2 * 2) = *(int *)(param_2 * 2) - unaff_ESI;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  if (!CARRY1(bVar1,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

