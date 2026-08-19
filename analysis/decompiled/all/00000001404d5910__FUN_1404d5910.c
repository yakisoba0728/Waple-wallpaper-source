// Function: FUN_1404d5910
// Addr: 1404d5910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5910(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *in_RAX;
  char unaff_R12B;
  char *unaff_retaddr;
  undefined8 uStackX_8;
  char *pcVar2;
  
  *in_RAX = *in_RAX + '@';
  *param_4 = *param_4 + unaff_R12B;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + '@';
  *param_4 = *param_4 + unaff_R12B;
  cRam00000000bc3d0040 = cRam00000000bc3d0040 + param_1;
  *uStackX_8 = *uStackX_8 + (char)uStackX_8;
  cVar1 = in(2);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)uStackX_8 >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

