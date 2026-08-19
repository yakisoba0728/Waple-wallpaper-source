// Function: FUN_1404b194c
// Addr: 1404b194c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b194c(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar6;
  uint uVar5;
  undefined4 in_register_00000004;
  byte bVar7;
  char *unaff_RBX;
  undefined1 *unaff_RDI;
  char in_CF;
  bool in_OF;
  char acStackX_16 [18];
  
  bVar7 = (byte)param_1;
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = ((char)in_EAX + -0x16) - in_CF;
  acStackX_16[(longlong)unaff_RBX] =
       acStackX_16[(longlong)unaff_RBX] + (char)((ulonglong)param_1 >> 8);
  uVar5 = CONCAT31(uVar6,cVar4 + *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar6,cVar4)) + 'T'
                  );
  *(uint *)CONCAT44(in_register_00000004,uVar5) =
       *(uint *)CONCAT44(in_register_00000004,uVar5) | uVar5;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  pbVar1 = (byte *)(param_1 + -0x77ffe9e4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  *unaff_RBX = (*unaff_RBX - bVar7) - CARRY1(bVar2,bVar7);
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

