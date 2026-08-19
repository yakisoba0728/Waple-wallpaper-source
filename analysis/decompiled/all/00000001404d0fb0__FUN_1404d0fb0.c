// Function: FUN_1404d0fb0
// Addr: 1404d0fb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0fb0(char *param_1)

{
  char cVar1;
  char *in_RAX;
  longlong unaff_RDI;
  
  cVar1 = (char)((ulonglong)in_RAX >> 8) + *in_RAX;
  *param_1 = *param_1 + cVar1;
  LocalDescriptorTableRegister
            (*(undefined2 *)
              (ulonglong)
              ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar1,(char)in_RAX)) +
              0x54050002));
  *(char *)(unaff_RDI + -0x37ffc576) =
       *(char *)(unaff_RDI + -0x37ffc576) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

