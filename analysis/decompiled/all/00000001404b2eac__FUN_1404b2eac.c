// Function: FUN_1404b2eac
// Addr: 1404b2eac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[0x120017a8] = in_RAX[0x120017a8] + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

