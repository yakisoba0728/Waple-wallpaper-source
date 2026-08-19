// Function: FUN_1404a3558
// Addr: 1404a3558
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3558(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_RAX;
  int unaff_ESP;
  int *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  longlong unaff_R14;
  longlong in_FS_OFFSET;
  
  *unaff_RSI = *unaff_RSI + unaff_ESP;
  uVar1 = *in_RAX;
  *(char *)(in_FS_OFFSET + unaff_R14) = *(char *)(in_FS_OFFSET + unaff_R14) + (char)unaff_ESP;
  *(byte *)unaff_RSI =
       (char)*unaff_RSI + ((byte)((ulonglong)in_RAX >> 8) | (byte)((uint)uVar1 >> 8));
  *param_2 = *param_2 + unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

