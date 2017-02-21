/**
 * Swagger Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/AdditionalPropertiesClass', 'model/Animal', 'model/AnimalFarm', 'model/ApiResponse', 'model/ArrayOfArrayOfNumberOnly', 'model/ArrayOfNumberOnly', 'model/ArrayTest', 'model/Capitalization', 'model/Cat', 'model/Category', 'model/ClassModel', 'model/Client', 'model/Dog', 'model/EnumArrays', 'model/EnumClass', 'model/EnumTest', 'model/FormatTest', 'model/HasOnlyReadOnly', 'model/List', 'model/MapTest', 'model/MixedPropertiesAndAdditionalPropertiesClass', 'model/Model200Response', 'model/ModelReturn', 'model/Name', 'model/NumberOnly', 'model/Order', 'model/OuterEnum', 'model/Pet', 'model/ReadOnlyFirst', 'model/SpecialModelName', 'model/Tag', 'model/User', 'api/FakeApi', 'api/PetApi', 'api/StoreApi', 'api/UserApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/AdditionalPropertiesClass'), require('./model/Animal'), require('./model/AnimalFarm'), require('./model/ApiResponse'), require('./model/ArrayOfArrayOfNumberOnly'), require('./model/ArrayOfNumberOnly'), require('./model/ArrayTest'), require('./model/Capitalization'), require('./model/Cat'), require('./model/Category'), require('./model/ClassModel'), require('./model/Client'), require('./model/Dog'), require('./model/EnumArrays'), require('./model/EnumClass'), require('./model/EnumTest'), require('./model/FormatTest'), require('./model/HasOnlyReadOnly'), require('./model/List'), require('./model/MapTest'), require('./model/MixedPropertiesAndAdditionalPropertiesClass'), require('./model/Model200Response'), require('./model/ModelReturn'), require('./model/Name'), require('./model/NumberOnly'), require('./model/Order'), require('./model/OuterEnum'), require('./model/Pet'), require('./model/ReadOnlyFirst'), require('./model/SpecialModelName'), require('./model/Tag'), require('./model/User'), require('./api/FakeApi'), require('./api/PetApi'), require('./api/StoreApi'), require('./api/UserApi'));
  }
}(function(ApiClient, AdditionalPropertiesClass, Animal, AnimalFarm, ApiResponse, ArrayOfArrayOfNumberOnly, ArrayOfNumberOnly, ArrayTest, Capitalization, Cat, Category, ClassModel, Client, Dog, EnumArrays, EnumClass, EnumTest, FormatTest, HasOnlyReadOnly, List, MapTest, MixedPropertiesAndAdditionalPropertiesClass, Model200Response, ModelReturn, Name, NumberOnly, Order, OuterEnum, Pet, ReadOnlyFirst, SpecialModelName, Tag, User, FakeApi, PetApi, StoreApi, UserApi) {
  'use strict';

  /**
   * This_spec_is_mainly_for_testing_Petstore_server_and_contains_fake_endpoints_models__Please_do_not_use_this_for_any_other_purpose__Special_characters__.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var SwaggerPetstore = require('index'); // See note below*.
   * var xxxSvc = new SwaggerPetstore.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new SwaggerPetstore.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new SwaggerPetstore.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new SwaggerPetstore.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 1.0.0
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The AdditionalPropertiesClass model constructor.
     * @property {module:model/AdditionalPropertiesClass}
     */
    AdditionalPropertiesClass: AdditionalPropertiesClass,
    /**
     * The Animal model constructor.
     * @property {module:model/Animal}
     */
    Animal: Animal,
    /**
     * The AnimalFarm model constructor.
     * @property {module:model/AnimalFarm}
     */
    AnimalFarm: AnimalFarm,
    /**
     * The ApiResponse model constructor.
     * @property {module:model/ApiResponse}
     */
    ApiResponse: ApiResponse,
    /**
     * The ArrayOfArrayOfNumberOnly model constructor.
     * @property {module:model/ArrayOfArrayOfNumberOnly}
     */
    ArrayOfArrayOfNumberOnly: ArrayOfArrayOfNumberOnly,
    /**
     * The ArrayOfNumberOnly model constructor.
     * @property {module:model/ArrayOfNumberOnly}
     */
    ArrayOfNumberOnly: ArrayOfNumberOnly,
    /**
     * The ArrayTest model constructor.
     * @property {module:model/ArrayTest}
     */
    ArrayTest: ArrayTest,
    /**
     * The Capitalization model constructor.
     * @property {module:model/Capitalization}
     */
    Capitalization: Capitalization,
    /**
     * The Cat model constructor.
     * @property {module:model/Cat}
     */
    Cat: Cat,
    /**
     * The Category model constructor.
     * @property {module:model/Category}
     */
    Category: Category,
    /**
     * The ClassModel model constructor.
     * @property {module:model/ClassModel}
     */
    ClassModel: ClassModel,
    /**
     * The Client model constructor.
     * @property {module:model/Client}
     */
    Client: Client,
    /**
     * The Dog model constructor.
     * @property {module:model/Dog}
     */
    Dog: Dog,
    /**
     * The EnumArrays model constructor.
     * @property {module:model/EnumArrays}
     */
    EnumArrays: EnumArrays,
    /**
     * The EnumClass model constructor.
     * @property {module:model/EnumClass}
     */
    EnumClass: EnumClass,
    /**
     * The EnumTest model constructor.
     * @property {module:model/EnumTest}
     */
    EnumTest: EnumTest,
    /**
     * The FormatTest model constructor.
     * @property {module:model/FormatTest}
     */
    FormatTest: FormatTest,
    /**
     * The HasOnlyReadOnly model constructor.
     * @property {module:model/HasOnlyReadOnly}
     */
    HasOnlyReadOnly: HasOnlyReadOnly,
    /**
     * The List model constructor.
     * @property {module:model/List}
     */
    List: List,
    /**
     * The MapTest model constructor.
     * @property {module:model/MapTest}
     */
    MapTest: MapTest,
    /**
     * The MixedPropertiesAndAdditionalPropertiesClass model constructor.
     * @property {module:model/MixedPropertiesAndAdditionalPropertiesClass}
     */
    MixedPropertiesAndAdditionalPropertiesClass: MixedPropertiesAndAdditionalPropertiesClass,
    /**
     * The Model200Response model constructor.
     * @property {module:model/Model200Response}
     */
    Model200Response: Model200Response,
    /**
     * The ModelReturn model constructor.
     * @property {module:model/ModelReturn}
     */
    ModelReturn: ModelReturn,
    /**
     * The Name model constructor.
     * @property {module:model/Name}
     */
    Name: Name,
    /**
     * The NumberOnly model constructor.
     * @property {module:model/NumberOnly}
     */
    NumberOnly: NumberOnly,
    /**
     * The Order model constructor.
     * @property {module:model/Order}
     */
    Order: Order,
    /**
     * The OuterEnum model constructor.
     * @property {module:model/OuterEnum}
     */
    OuterEnum: OuterEnum,
    /**
     * The Pet model constructor.
     * @property {module:model/Pet}
     */
    Pet: Pet,
    /**
     * The ReadOnlyFirst model constructor.
     * @property {module:model/ReadOnlyFirst}
     */
    ReadOnlyFirst: ReadOnlyFirst,
    /**
     * The SpecialModelName model constructor.
     * @property {module:model/SpecialModelName}
     */
    SpecialModelName: SpecialModelName,
    /**
     * The Tag model constructor.
     * @property {module:model/Tag}
     */
    Tag: Tag,
    /**
     * The User model constructor.
     * @property {module:model/User}
     */
    User: User,
    /**
     * The FakeApi service constructor.
     * @property {module:api/FakeApi}
     */
    FakeApi: FakeApi,
    /**
     * The PetApi service constructor.
     * @property {module:api/PetApi}
     */
    PetApi: PetApi,
    /**
     * The StoreApi service constructor.
     * @property {module:api/StoreApi}
     */
    StoreApi: StoreApi,
    /**
     * The UserApi service constructor.
     * @property {module:api/UserApi}
     */
    UserApi: UserApi
  };

  return exports;
}));
