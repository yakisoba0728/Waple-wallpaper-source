// Function: FUN_1401f4c20
// Addr: 1401f4c20
// Size: 476 bytes


void FUN_1401f4c20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x30c) != '\x02') {
    if ((*(char *)(param_1 + 0x30c) != '\x01') || (0.0 < *(float *)(param_1 + 0x2fc))) {
      lVar1 = *(longlong *)(param_1 + 0x2c8);
      for (lVar5 = *(longlong *)(param_1 + 0x2c0); lVar5 != lVar1; lVar5 = lVar5 + 0x38) {
        if ((*(longlong *)(lVar5 + 0x28) != 0) &&
           (cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xb0))(),
           cVar4 == '\0')) {
          if ((~(byte)((uint)*(undefined4 *)(param_1 + 0x310) >> 0x1e) & 1) != 0)
          goto LAB_1401f4cbf;
          break;
        }
      }
    }
    if (((*(uint *)(param_1 + 0x310) & 0x40000002) == 0) && (-1 < (int)*(uint *)(param_1 + 0x310)))
    {
      FUN_1401f5980(param_1);
    }
  }
LAB_1401f4cbf:
  lVar5 = *(longlong *)(param_1 + 0x2c0);
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  do {
    if (lVar5 == lVar1) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
      (**(code **)(*plVar2 + 0xd0))
                (plVar2,*(longlong *)(lVar5 + 0x28),
                 *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0) *
                 *(float *)(*(longlong *)(param_1 + 200) + 0x2d8));
      lVar3 = *(longlong *)(param_1 + 200);
      if (0.0 < *(float *)(lVar3 + 0x2d8)) {
        if (((*(uint *)(param_1 + 0x310) & 0x40000000) == 0) &&
           (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x158) + 0xa8))
                              (*(longlong **)(lVar3 + 0x158),*(undefined8 *)(lVar5 + 0x28)),
           cVar4 != '\0')) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          (**(code **)(*plVar2 + 0xb8))
                    (plVar2,*(undefined8 *)(lVar5 + 0x28),*(char *)(param_1 + 0x30c) == '\0');
          return;
        }
      }
      else {
        cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x158) + 0xa0))
                          (*(longlong **)(lVar3 + 0x158),*(undefined8 *)(lVar5 + 0x28));
        if (((cVar4 != '\0') &&
            (plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158),
            (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)(lVar5 + 0x28)),
            (byte)(*(char *)(param_1 + 0x30c) - 1U) < 2)) && (*(float *)(param_1 + 0x300) <= 0.0)) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x158);
          (**(code **)(*plVar2 + 200))(plVar2,*(undefined8 *)(lVar5 + 0x28));
        }
      }
    }
    lVar5 = lVar5 + 0x38;
  } while( true );
}

