// Function: FUN_1404d4304
// Addr: 1404d4304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d434b) */

void FUN_1404d4304(char *param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  char cVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  ulonglong unaff_RBP;
  int *unaff_RSI;
  char *unaff_RDI;
  longlong unaff_retaddr;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x30000b74U);
  if (SCARRY4(in_EAX,0x30000b74)) {
    pcVar2 = (char *)(unaff_RBP & 0xffffffff);
    *(char **)(unaff_retaddr + -8) = unaff_RDI;
    *param_1 = *param_1 + (char)((ulonglong)pcVar2 >> 8);
    cVar1 = (char)pcVar2;
    *pcVar2 = *pcVar2 + cVar1;
    cVar3 = (char)param_2;
    *(int **)(unaff_retaddr + -0x10) = unaff_RSI;
    pcVar2[0x21004d42] = pcVar2[0x21004d42] + unaff_BL;
    *pcVar2 = *pcVar2 + cVar1;
    *pcVar2 = *pcVar2 + cVar3;
    *(int **)(unaff_retaddr + -0x18) = unaff_RSI;
    pcVar2[0x19004d42] = pcVar2[0x19004d42] + cVar1;
    *(int *)CONCAT71(unaff_00000019,unaff_BL) =
         *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
    *unaff_RDI = *unaff_RDI + cVar3;
    *unaff_RDI = *unaff_RDI + cVar3;
    *unaff_RSI = *unaff_RSI +
                 CONCAT22((short)((uint)param_2 >> 0x10),
                          CONCAT11((char)((uint)param_2 >> 8) + cVar1,cVar3));
    *(char *)((ulonglong)pcVar2 ^ 0x20) = *(char *)((ulonglong)pcVar2 ^ 0x20) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2[(longlong)unaff_RSI * 2 + 0x3d] = pcVar2[(longlong)unaff_RSI * 2 + 0x3d] + unaff_BL;
  *pcVar2 = *pcVar2 + (char)(in_EAX + 0x30000b74U >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

