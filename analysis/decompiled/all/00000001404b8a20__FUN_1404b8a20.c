// Function: FUN_1404b8a20
// Addr: 1404b8a20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8a20(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  pbVar3 = (byte *)(ulonglong)(uint)(param_2 + unaff_ESI);
  in(0xd);
  bVar2 = (byte)(param_2 + unaff_ESI);
  uRam0000000000000000 = param_1;
  *pbVar3 = *pbVar3 + bVar2;
  LocalDescriptorTableRegister(*(undefined2 *)pbVar3);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  if (!CARRY1(bVar1,bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EDI;
  *(undefined1 *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(undefined1 *)CONCAT44(unaff_0000003c,unaff_EDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

