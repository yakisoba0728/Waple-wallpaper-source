// Function: FUN_1404a72a4
// Addr: 1404a72a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a72af) */

void FUN_1404a72a4(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint uVar3;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX >> 1;
  uVar3 = CONCAT31(uVar4,cVar1);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  *unaff_RDI = *unaff_RSI;
  cVar1 = cVar1 + '\x02';
  (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 8] =
       (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 8] + cVar1;
  *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cVar1)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cVar1)) + cVar1;
  uVar2 = in(0xfa);
  uVar3 = CONCAT31(uVar4,uVar2);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

