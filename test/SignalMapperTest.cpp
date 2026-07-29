TEST(
  SignalMapperTest,
  MapsRtcSignal)
{
    SignalMapper mapper;

    auto result =
        mapper.map(
            "RTC_Service",
            "TimestampUpdate",
            "10:00");

    ASSERT_EQ(
        result.path,
        "Vehicle.System.CurrentTime");
}