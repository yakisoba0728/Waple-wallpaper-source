// Function: FUN_1404bd594
// Addr: 1404bd594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd594(byte *param_1,char *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  int *in_RAX;
  char cVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  *(int *)param_1 = *(int *)param_1 + unaff_EBX;
  *(int *)((longlong)in_RAX + 9) = *(int *)((longlong)in_RAX + 9) - unaff_EDI;
  *param_2 = *param_2 + (char)param_1;
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + (int)param_2;
  bVar1 = *param_1;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar2;
  *(char *)in_RAX = ((char)*in_RAX - param_3) - CARRY1(bVar1,bVar2);
  *in_RAX = *in_RAX + (int)in_RAX;
  func_0x0001188bd5b0();
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

