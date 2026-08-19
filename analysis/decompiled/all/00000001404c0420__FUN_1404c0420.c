// Function: FUN_1404c0420
// Addr: 1404c0420
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0420(longlong param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *in_RAX;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  *(byte *)((longlong)in_RAX + 7) =
       *(byte *)((longlong)in_RAX + 7) & (byte)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)(param_1 + (longlong)in_RAX);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  *in_RAX = *in_RAX + (int)in_RAX + (uint)CARRY1(bVar2,param_2);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

