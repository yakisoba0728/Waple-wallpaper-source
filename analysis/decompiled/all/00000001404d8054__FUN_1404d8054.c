// Function: FUN_1404d8054
// Addr: 1404d8054
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d8054(undefined8 param_1)

{
  char cVar1;
  ulonglong in_RAX;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  char *unaff_RDI;
  int unaff_retaddr;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  cVar3 = (char)param_1;
  cVar1 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (char *)(in_RAX ^ 0x1c);
  *unaff_RDI = *unaff_RDI + cVar3;
  *unaff_RSI = *unaff_RSI + unaff_retaddr;
  cVar1 = *pcVar2;
  *pcVar2 = *pcVar2 + cVar3;
  if (!SCARRY1(cVar1,cVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (char)pcVar2 + *pcVar2;
  pcVar2 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar1);
  pcVar2[10] = pcVar2[10] | bVar4;
  *pcVar2 = *pcVar2 + (char)((uint)unaff_retaddr >> 8);
  *unaff_RDI = cVar1;
  *(uint *)(unaff_RDI + 0xf) =
       *(uint *)(unaff_RDI + 0xf) & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  unaff_RDI[-0x17] = unaff_RDI[-0x17] + unaff_BL;
  cRam00000001744d8645 = cRam00000001744d8645 + unaff_BH;
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

