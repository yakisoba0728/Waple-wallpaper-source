// Function: FUN_1404b5888
// Addr: 1404b5888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5888(void)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  char unaff_BL;
  char cVar3;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  char *in_R9;
  
  cVar3 = unaff_BL + unaff_BH;
  pcVar1 = (char *)((ulonglong)(in_EAX + 0xf0000774) + 0x21004b57);
  *pcVar1 = *pcVar1 + '\x1a';
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar3)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar3)) + cVar3;
  pcVar1 = (char *)((ulonglong)(in_EAX + 0xd4050776U) + 0x21004b57);
  *pcVar1 = *pcVar1 + '\x1a';
  uVar2 = in_EAX + 0xd4050776U | 0x540d0004;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  *unaff_RDI = *unaff_RDI + '\x1a';
  *in_R9 = *in_R9 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

