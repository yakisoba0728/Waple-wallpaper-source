// Function: FUN_1404a9780
// Addr: 1404a9780
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9780(undefined8 param_1)

{
  undefined4 uVar1;
  uint in_EAX;
  char cVar2;
  undefined6 uVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT71(unaff_00000021,unaff_SPL) = uVar1;
  cVar2 = (char)((ulonglong)param_1 >> 8) + (char)((in_EAX | 0x34) + 0xcdac000 >> 8);
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

