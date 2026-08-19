// Function: FUN_1404d39c8
// Addr: 1404d39c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d39c8(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  char *in_RAX;
  byte unaff_BL;
  int unaff_ESI;
  
  cVar2 = (char)in_RAX;
  cRam21004a2d00003f38 = cVar2;
  *in_RAX = *in_RAX + cVar2;
  in_RAX[-0x5dffc0cc] = in_RAX[-0x5dffc0cc] + cVar2;
  *in_RAX = *in_RAX + cVar2;
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

