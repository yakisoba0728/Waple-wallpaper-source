// Function: FUN_14028a670
// Addr: 14028a670
// Size: 668 bytes


int FUN_14028a670(longlong *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != puVar5) {
    if ((longlong)puVar5 - (longlong)puVar1 == 8) {
      (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,&local_78);
      (**(code **)(**(longlong **)*param_1 + 0x20))(*(longlong **)*param_1,&local_88,DAT_140492750);
      (**(code **)(**(longlong **)*param_1 + 0x20))(*(longlong **)*param_1,&local_68,DAT_140492768);
      dVar2 = (local_80 + local_70) * (local_88 - local_78) + 0.0 +
              (local_60 + local_80) * (local_68 - local_88) +
              (local_60 + local_70) * (local_78 - local_68);
    }
    else if ((longlong)puVar5 - (longlong)puVar1 == 0x10) {
      (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,&local_78);
      uVar4 = DAT_140492758;
      (**(code **)(**(longlong **)*param_1 + 0x20))(*(longlong **)*param_1,&local_68,DAT_140492758);
      (**(code **)(**(longlong **)(*param_1 + 8) + 0x20))(*(longlong **)(*param_1 + 8),&local_88,0);
      (**(code **)(**(longlong **)(*param_1 + 8) + 0x20))
                (*(longlong **)(*param_1 + 8),&local_58,uVar4);
      dVar2 = (local_60 + local_70) * (local_68 - local_78) + 0.0 +
              (local_80 + local_60) * (local_88 - local_68) +
              (local_50 + local_80) * (local_58 - local_88) +
              (local_78 - local_58) * (local_50 + local_70);
    }
    else {
      dVar2 = 0.0;
      (**(code **)(*(longlong *)puVar5[-1] + 0x20))((longlong *)puVar5[-1],&local_88,0);
      puVar5 = (undefined8 *)*param_1;
      dVar3 = 0.0;
      if (puVar5 != (undefined8 *)param_1[1]) {
        do {
          (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,&local_58,0);
          puVar5 = puVar5 + 1;
          dVar2 = dVar3 + (local_50 + local_80) * (local_58 - local_88);
          dVar3 = dVar2;
          local_88 = local_58;
          local_80 = local_50;
        } while (puVar5 != (undefined8 *)param_1[1]);
      }
    }
    return (uint)(0.0 < dVar2) - (uint)(dVar2 < 0.0);
  }
  return 0;
}

