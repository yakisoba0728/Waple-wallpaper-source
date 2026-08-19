// Function: FUN_1404a4c64
// Addr: 1404a4c64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4c64(char *param_1,char *param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  uint *unaff_RDI;
  char *pcVar3;
  
  iVar2 = in_EAX + -0x3ffff78c;
  *unaff_RDI = *unaff_RDI << 1 | (uint)((int)*unaff_RDI < 0);
  cVar1 = (char)iVar2;
  pcVar3 = (char *)(ulonglong)
                   CONCAT22((short)((uint)iVar2 >> 0x10),
                            CONCAT11((char)((uint)iVar2 >> 8) + (char)((ulonglong)param_1 >> 8),
                                     cVar1));
  *unaff_RDI = *unaff_RDI << 1 | (uint)((int)*unaff_RDI < 0);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + cVar1;
  *unaff_RDI = *unaff_RDI << 1 | (uint)((int)*unaff_RDI < 0);
  *unaff_RDI = *unaff_RDI << 1 | (uint)((int)*unaff_RDI < 0);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  *param_1 = *param_1 + cVar1 * '\x02';
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

