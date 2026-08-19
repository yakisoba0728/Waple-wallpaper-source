// Function: FUN_1404c3d0c
// Addr: 1404c3d0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3d0c(longlong param_1,longlong param_2)

{
  byte bVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  char cVar2;
  char cVar3;
  undefined6 uVar5;
  byte *unaff_RBX;
  int *unaff_RDI;
  byte in_CF;
  byte bVar4;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  cVar2 = (char)param_2;
  bVar1 = bVar4 + unaff_RBX[param_2];
  cVar3 = bVar1 + in_CF;
  cVar3 = cVar3 + *(char *)(param_1 + CONCAT62(uVar5,CONCAT11(cVar3,cVar2))) +
          (CARRY1(bVar4,unaff_RBX[param_2]) || CARRY1(bVar1,in_CF));
  *(char *)CONCAT62(uVar5,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar3,cVar2)) + cVar2;
  bVar1 = (byte)param_1 & 7;
  *unaff_RBX = *unaff_RBX >> bVar1 | *unaff_RBX << 8 - bVar1;
  *unaff_RDI = *unaff_RDI + in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

