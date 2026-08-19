// Function: FUN_1404adbd0
// Addr: 1404adbd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adbd0(int *param_1,longlong param_2)

{
  undefined4 uVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  
  if (!in_CF && !in_ZF) {
    bVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + in_CF;
    *unaff_RDI = *unaff_RSI;
    *param_1 = *param_1 + (int)param_2;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))
                          ) | bVar2;
    *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  bVar2 = in_AH | in_AL;
  LOCK();
  uVar1 = *(undefined4 *)
           CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
  UNLOCK();
  cVar3 = (char)uVar1 + '4';
  LOCK();
  *(char *)CONCAT44(in_register_00000004,
                    CONCAT22((short)((uint)uVar1 >> 0x10),CONCAT11((char)((uint)uVar1 >> 8),cVar3)))
       = cVar3;
  UNLOCK();
  *(int *)(ulonglong)*(uint *)(param_2 * 2) = (int)in_ST0;
  uRam00000001a877dc46 = uRam00000001a877dc46 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

